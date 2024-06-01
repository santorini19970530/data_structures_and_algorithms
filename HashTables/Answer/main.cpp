#include "./HashTable.hpp"
#include<iostream>

int main(){
    HashTable hayshit(1, 2, 10);

    hayshit.insert(4);
    hayshit.find(4);
    hayshit.remove(4);

    return 0;
}
