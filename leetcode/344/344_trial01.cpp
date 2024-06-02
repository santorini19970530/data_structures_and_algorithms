// leetcode 3110
// linear go thru the array
// runtime 0 ms, beat 100% of C++ online submissions
// memory 7.8 mb, less than 78.98% of C++ online submissions

#include<iostream>

class Solution {
public:
    int scoreOfString(std::string s){
        int sumOfDiff = 0;
        char* current = &s[0];
        char* next = &s[1];
        
        while(*next != '\0'){
            sumOfDiff += getDiff(*current - '0', *next - '0');
            current++;
            next++;
        }

        return sumOfDiff;
    }

    int getDiff(int a, int b){
        return (a > b) ? a - b : b - a;
    }
};
