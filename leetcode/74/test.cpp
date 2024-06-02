#include<iostream>
#include<vector>
#include "./74_trial01.cpp"

int main(){
    Solution s;

    std::vector<std::vector<int>> matrix1 {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int m = matrix1.size();
    int n = matrix1[0].size();

    std::cout << "Example matrix : " << std::endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            std::cout << matrix1[i][j] << "\t";
        std::cout << std::endl;
    }

    std::cout <<  "\n" << std::endl;

    int target1 = 3;

    std::cout << "Example 1 - target = " << target1 
        << " is in the matrix : " << std::boolalpha << s.searchMatrix(matrix1, target1)
        << std::endl;

    std::cout <<  "\n" << std::endl;

    int target2 = 13;

    std::cout << "Example 2 - target = " << target2 
        << " is in the matrix : " << std::boolalpha << s.searchMatrix(matrix1, target2)
        << std::endl;

    std::vector<std::vector<int>> matrix2 {{1, 1}};
    m = matrix2.size();
    n = matrix2[0].size();

    std::cout << "\nExample matrix : " << std::endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            std::cout << matrix2[i][j] << "\t";
        std::cout << std::endl;
    }

    std::cout <<  "\n" << std::endl;

    int target3 = 2;

    std::cout << "Example 2 - target = " << target3 
        << " is in the matrix : " << std::boolalpha << s.searchMatrix(matrix2, target3)
        << std::endl;

    return 0;
}
