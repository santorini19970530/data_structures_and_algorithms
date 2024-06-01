// leetcode 704
// purely binery search
// runtime 25 ms, beat 68.37% of C++ online submissions
// memory 30 mb, less than 22.22% of C++ online submissions

#include<iostream>
#include<vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target){
        int low = 0;
        int high = (int)(nums.size()) - 1;
        // nums.size() is size_of type, need to change to int first
        int mid {};

        while(low <= high){
            mid = low + (high - low) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return -1;
    }
};
