#include<iostream>
#include<vector>
#include "./344_trial01.cpp"

int main(){
    Solution s;

    std::vector<char> s1 {'h','e','l','l','o'};

    std::cout << "Example 1 - s = " << std::endl;
    for(int i = 0; i < s1.size(); i++)
        std::cout << s1[i];
    std::cout << "\nResult string : " << std::endl;
    s.reverseString(s1);

    std::vector<char> s2 {'H','a','n','n','o','h'};

    std::cout << std::endl;

    std::cout << "Example 2 - s = " << std::endl;
    for(int i = 0; i < s2.size(); i++)
        std::cout << s2[i];
    std::cout << "\nResult string : " << std::endl;
    s.reverseString(s2);

    std::vector<char> s3 {'A',' ','m','a','n',',',' ','a',' ','p','l','a','n',',',' ','a',' ','c','a','n','a','l',':',' ','P','a','n','a','m','a'};
    std::cout << std::endl;

    std::cout << "Example 3 - s = " << std::endl;
    for(int i = 0; i < s3.size(); i++)
        std::cout << s3[i];
    std::cout << "\nResult string : " << std::endl;
    s.reverseString(s3);

    return 0;
}
