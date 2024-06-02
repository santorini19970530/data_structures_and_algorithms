#include<iostream>
#include "./3110_trial01.cpp"

int main(){
    Solution s;

    std::cout << "Example 1 - s = \"hello\" - " << s.scoreOfString("hello") << std::endl;
    std::cout << "Example 2 - s = \"zaz\" - " << s.scoreOfString("zaz") << std::endl;

    return 0;
}
