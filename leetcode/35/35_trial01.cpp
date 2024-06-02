// leetcode 35
// binary search
// runtime 0 ms, beat 100% of C++ online submissions
// memory 12 mb, less than 45.28% of C++ online submissions

#include<iostream>
#include<vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int mid {0};
        int low {0};
        int high {int(nums.size())};

        while(low < high){
            mid = low + (high - low) / 2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid;
        }

        return low;
    }
};
