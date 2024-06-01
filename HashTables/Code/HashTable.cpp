#include "./HashTable.hpp"
#include<iostream>
#include<iomanip>

HashTable::HashTable(long _a, long _c, long _m) {
    a = _a;
    c = _c;
    m = _m;
    occupied_size = 0;

    buckets = new int[m];

    for(std::size_t i = 0; i < m; i++)
        buckets[i] = -1;
}

HashTable::~HashTable() {
    delete[] buckets;
    occupied_size = 0;
}

void HashTable::insert(int key) {
    if(occupied_size >= m)
        extend();

    long insertPos = HashTable::genHash(key);
    
    while(buckets[insertPos] != -1){
        insertPos++;
        if(insertPos >= m)
            insertPos = 0;
    }
    buckets[insertPos] = key;
    occupied_size++;
}

// assuming to double the hash table size
void HashTable::extend() {
    // create another hash table
    long m_temp = m * 2;
    int *temp = new int[m_temp];
    long occupied_size_temp = 0;

    for(std::size_t i = 0; i < m_temp; i++)
        temp[i] = -1;

    // re-hash
    for(std::size_t i = 0; i < m; i++)
        if(buckets[i] == -1)
            continue;
        else{
            long insertPos = (a * buckets[i] + c) % m_temp;

            while(temp[insertPos] != -1){
                insertPos++;
                if(insertPos >= m_temp)
                    insertPos = 0;
            }
            temp[insertPos] = buckets[i];
            occupied_size_temp++;
        }

    // re-assign the values in the object
    m = m_temp;
    delete[] buckets;
    buckets = temp;
    occupied_size = occupied_size_temp;
}

bool HashTable::find(int key) {
    int searchPos = HashTable::genHash(key);

    if(buckets[searchPos] == key)
        return true;
    else
        for(int i = searchPos + 1; i != searchPos; i++){
            if(i >= m)
                i = 0;
            if(buckets[i] == key)
                return true;
        }

    return false;
}

void HashTable::remove(int key){
    int searchPos = HashTable::genHash(key);

    if(buckets[searchPos] == key){
        buckets[searchPos] = -1;
        occupied_size--;
        return;
    }
    else
        for(int i = searchPos + 1; i != searchPos; i++){
            if(i >= m)
                i = 0;
            if(buckets[i] == key){
                buckets[i] = -1;
                occupied_size--;
                return;
            }
        }

    std::cout << "HashTable::remove error - cannot find the value " << key << "." << std::endl;
}

double HashTable::loadFactor() {
    return (double) occupied_size / m;
}

void HashTable::print(){
    // print the hash table's current parameter
    std::cout << "a = " << a << "\n" 
        << "c = " << c << "\n" 
        << "m = " << m << "\n"
        << "load factor : " << std::setprecision(2) << std::fixed << HashTable::loadFactor() << std::endl;

    // print the elements of the hash table
    if(occupied_size > 0){
        for(std::size_t i = 0; i < m ; i++)
            std::cout << i << " : " << buckets[i] << "\n";
        std::cout << std::endl;
    }
}

long HashTable::genHash(int key){
    return (a * key + c) % m;
}
