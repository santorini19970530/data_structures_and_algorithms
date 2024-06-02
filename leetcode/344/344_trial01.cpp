// leetcode 344
// 
// runtime 14 ms, beat 82.25% of C++ online submissions
// memory 26.9 mb, less than 60.22% of C++ online submissions

#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    void reverseString(std::vector<char>& s){
        int left {0};
        int right = s.size() - 1;
        
        while(left < right)
            /*char x = s[left];
            s[left] = s[right];
            s[right] = x;*/
            swap(s[left++], s[right--]);
    }
};
