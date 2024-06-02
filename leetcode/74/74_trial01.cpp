// leetcode 74
// linear search through the matrix

#include<iostream>
#include<vector>

class Solution {
public:
    // binary search approach
    // runtime 0 ms, beat 100% of C++ online submissions
    // memory 11.8 mb, less than 86.64% of C++ online submissions
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int m = matrix.size();      // y coordinates
        int n = matrix[0].size();   // x coordinates
        int left_pos {0};           // position of the first element of the matrix
        int right_pos {m * n - 1};  // position of the last element of the matrix
        int mid_pos {0};            // position of the element at the middle point of the matrix

        while(left_pos <= right_pos){
            mid_pos = left_pos + (right_pos - left_pos) / 2;

            if(matrix[mid_pos / n][mid_pos % n] == target)
                return true;
            else if(matrix[mid_pos / n][mid_pos % n] > target)
                right_pos = mid_pos - 1;
            else
                left_pos = mid_pos + 1;
        }

        return false;   
    }

    // linear search approach
    // runtime 7 ms, beat 21.63% of C++ online submissions
    // memory 12 mb, less than 48.57% of C++ online submissions
    bool searchMatrix_linear_search(std::vector<std::vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(matrix[i][j] == target)
                    return true;

        return false;   
    }
};
