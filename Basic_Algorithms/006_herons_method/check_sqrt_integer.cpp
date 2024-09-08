#include <iostream>

bool isXInteger(int);

int main(){
  for(int i = 0; i < 20; i++)
    std::cout << "square root of " << i << " is integer : " << std::boolalpha << isXInteger(i) << std::endl;

  return 0;
}

bool isXInteger(int n){
  bool y = false;
  
  for(int i = 1; i <= n; i++)
    if(i * i == n)
      y = true;
  return y;
}
