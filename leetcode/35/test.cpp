#include<iostream>
#include<vector>
#include "./35_trial01.cpp"

int main(){
    Solution s;

    std::vector<int> arr1 {1, 3, 5, 6};

    std::cout << "Array elements : " << std::endl;
    for(int i = 0; i < arr1.size(); i++)
        std::cout << arr1[i] << "\t";
    std::cout << std::endl;

    int target1 {5};
    std::cout << "Example 1 : "
        << target1 << " should be inserted into position "
        << s.searchInsert(arr1, target1) << std::endl;

    int target2 {2};
    std::cout << "Example 2 : "
        << target2 << " should be inserted into position "
        << s.searchInsert(arr1, target2) << std::endl;

    int target3 {7};
    std::cout << "Example 3 : "
        << target3 << " should be inserted into position "
        << s.searchInsert(arr1, target3) << std::endl;

    int target4 {0};
    std::cout << "Example 4 : "
        << target4 << " should be inserted into position "
        << s.searchInsert(arr1, target4) << std::endl;

    std::vector<int> arr2 {1, 3, 5, 7};
    int target5 {6};

    std::cout << "\nArray elements : " << std::endl;
    for(int i = 0; i < arr2.size(); i++)
        std::cout << arr2[i] << "\t";
    std::cout << std::endl;

    std::cout << "Example 4 : "
        << target5 << " should be inserted into position "
        << s.searchInsert(arr2, target5) << std::endl;

    return 0;
}
