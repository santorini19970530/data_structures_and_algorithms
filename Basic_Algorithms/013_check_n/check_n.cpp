#include <iostream>

bool checkN(int);

int main(){
    for(int i = 3; i < 20; i++) std::cout << i << " is not prime number: " << std::boolalpha << checkN(i) << std::endl;

    return 0;
}

bool checkN(int n){
    int i = 2;

    while(i < n){
        if(n % i == 0) return true;
        i++;
    }
    return false;
}
