#include<iostream>
#include<vector>
#include "./704_trial01.cpp"

int main(){
    Solution s;

    std::vector<int> vec1 {-1,0,3,5,9,12};
    int target1 = 9;

    std::cout << "Example 1 - " << std::endl;
    for(size_t i = 0; i < vec1.size(); i++)
        std::cout << vec1[i] << "\t";
    std::cout << std::endl;
    std::cout << "The value " << target1 << " is at position " << s.search(vec1, target1) << std::endl;

    std::cout << "\n--------\n" << std::endl;

    std::vector<int> vec2 {-1,0,3,5,9,12};
    int target2 = 2;

    std::cout << "Example 2 - " << std::endl;
    for(size_t i = 0; i < vec2.size(); i++)
        std::cout << vec2[i] << "\t";
    std::cout << std::endl;
    std::cout << "The value " << target2 << " is at position " << s.search(vec2, target2) << std::endl;

    std::cout << "\n--------\n" << std::endl;

    // this testcase find out that I am using size_t as counter
    // but size_t cannot meet array size requirement
    // so I need to use int

    std::vector<int> vec3 {5};
    int target3 = -5;

    std::cout << "Example 3 - " << std::endl;
    for(size_t i = 0; i < vec3.size(); i++)
        std::cout << vec3[i] << "\t";
    std::cout << std::endl;
    std::cout << "The value " << target3 << " is at position " << s.search(vec2, target2) << std::endl;
 
    return 0;
}
