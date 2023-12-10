#include <iostream>

bool even(int);

int main(){
  int x = 10;

  std::cout << x << " is even : " << std::boolalpha << even(x) << std::endl;
}

bool even(int n){
  if(n % 2 == 0) return true;
  else return false;
}
