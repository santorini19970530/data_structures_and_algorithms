#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

class HashTable {
    public: // for testing purposes
        int *buckets = 0;

    public:
        HashTable(long, long, long);
        ~HashTable();
        void insert(int);
        void extend();
        bool find(int);
        void remove(int);
        double loadFactor();

    //private:
        long a, c;
        long m;
        long current_size;
};

#endif
