#include "./HashTable.hpp"
#include <iostream>

int main(){
    std::cout << "Hello" << std::endl;
    HashTable hash (1, 2, 3);
    HashTable hash1 (4, 5, 6);
    HashTable hash_test(31, 37, 50);
    HashTable hash_test_2(21, 7, 30);

    hash.print();
    hash1.print();
    // hash1.~HashTable();
    hash1.insert(7);
    hash1.insert(8);
    hash1.insert(7);
    hash1.insert(7);
    hash1.insert(7);
    hash1.insert(7);
    hash1.insert(7);
    hash1.insert(7);
    hash1.print();

    hash1.extend();
    hash1.insert(4);
    hash1.print();

    std::cout << hash1.find(9) << std::endl;
    std::cout << hash1.find(7) << std::endl;

    hash1.remove(6);
    hash1.remove(7);

    hash1.print();

    
    for(std::size_t i = 1; i < 21; i++)
        hash_test.insert(2 * i * i + 3 * i - 5);
    std::cout << hash_test.loadFactor() << std::endl;
    hash_test.print();


    for(std::size_t i = 1; i < 21; i++)
        hash_test_2.insert(2 * i * i + 5 * i - 5);
    std::cout << hash_test_2.loadFactor() << std::endl;
    hash_test_2.print();

    return 0;
}
