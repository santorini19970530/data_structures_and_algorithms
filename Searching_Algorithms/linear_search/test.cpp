#include<iostream>
#include "./linear_search.cpp"

int main(){
    Linear_Search ls;

    int array[] {5, 4, 3, 2, 1};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 10;
    int y = 4;

    std::cout << "Array values : ";
    for(size_t i = 0; i < n; i++)
        std::cout << array[i] << "\t";
    std::cout << std::endl;

    std::cout << "Value " << x << " is in position " << ls.linear_search(array, n, x) << std::endl;
    std::cout << "Value " << y << " is in position " << ls.linear_search(array, n, y) << std::endl;

    return 0;
}
