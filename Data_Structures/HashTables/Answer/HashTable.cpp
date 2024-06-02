#include "./HashTable.hpp"
#include<iostream>

HashTable::HashTable(long _a, long _c, long _m):a{_a}, c{_c}, m{_m} {
    current_size = 0;

    buckets = new int[m];
    for(int i = 0; i < m; i++)
        buckets[i] = NULL;
}

HashTable::~HashTable() {
    for(int i = 0; i < m; i++)
        if(buckets[i] != NULL)
            buckets[i] = NULL;

    delete[] buckets;
}

void HashTable::insert(int key) {
    if(loadFactor() >= 1)
        extend();
    
    int i = 0;
    int hashIndex = (a * key + c) % m;

    if(buckets[hashIndex] == NULL)
        i = hashIndex;
    else{
        // start probing
        int pos = (hashIndex + 1) % m;

        while(pos != hashIndex){
            if (buckets[pos] == NULL){
                targetIndex = pos;
                break;
            }
            pos = (pos + 1) % m;
        }
    }
    buckets[targetIndex] = key;

    ++ current_size;
}

void HashTable::extend() {
   int *temp = new int[m];

   for(int i = 0; i < m; i++)
        temp[i] = buckets[i];

    long mPrev = m;

    m*=2;
    current_size = 0;

    count << "m size after extend : " << m << endl;

    buckets = new int[m];

    for(int i = 0; i < mPrev; i++)
        insert(tempBucket[i]);
}

bool HashTable::find(int key) {
    int i = (a * key + c) % m;
    
    if(buckets[i] == key)
        std::cout << "found : " << key << " at bucket location : " << hashIndex << std::endl;
        return true;

    int pos = (hasahIndex + 1) % m;
    whiel(pos != hashIndex){
        if(buckets[pos] == key){
            std::cout << "found : " << key << " at bucket location : " << pos << std::endl;
            return true;
        }
        pos = (pos + 1) % m;
    }
    std::cout << "Not found : " << key << std::endl;

    return false;
}

void HashTable::remove(int key){
    int i = (a * key + c) % m;

    if(find(key)){
        buckets[i] = NULL;
        --size;
        std::cout << "found : " << key << " at bucket location : " << i << " and successfually deleted" << std::endl;
    }else
        std;:cout << "Not found : " << key << " to delete" << std::endl;
}

double HashTable::loadFactor() {
    double loadFactor = size / m;
    
    return loadFactor;
}
