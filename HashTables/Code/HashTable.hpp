/*
 * hash table with linear probing
 * hashing function is h(k) = ( a * k + c ) mod m
 * where coefficients a c and m > 0 and are integers
 * m is the number of buckets of the hash table
*/ 


#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

class HashTable {
    public:
        int *buckets;
        long a;
        long c;
        long m;

        HashTable(long, long, long);    // constructor
        ~HashTable();
        void insert(int);
        void extend();
        bool find(int);
        void remove(int);
        double loadFactor();
        void print();
    private:
        long occupied_size;
        long genHash(int);
};

#endif
