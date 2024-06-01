#include<iostream>
#include "./binary_search.cpp"

int main(){
    Binary_Search bs;

    int array[] {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 10;
    int y = 4;

    std::cout << "Array values : ";
    for(size_t i = 0; i < n; i++)
        std::cout << array[i] << "\t";
    std::cout << std::endl;

    std::cout << "Iterative" << std::endl;
    std::cout << "Value " << x << " is in position " << bs.binary_search_iterative(array, n, x) << std::endl;
    std::cout << "Value " << y << " is in position " << bs.binary_search_iterative(array, n, y) << std::endl;

    std::cout << "\nRecursive" << std::endl;
    std::cout << "Value " << x << " is in position " << bs.binary_search_recursive(array, 0, n, x) << std::endl;
    std::cout << "Value " << y << " is in position " << bs.binary_search_recursive(array, 0, n, y) << std::endl;

    return 0;
}
