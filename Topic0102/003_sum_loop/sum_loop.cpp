#include <iostream>

int main(){
  //video example
  int x = 1;
  
  for(int i = 2; i <= 10; i++)
    x += i;

  std::cout << x << std::endl;

  // review question 3
  int a = 4;
  
  for(int i = 0; i < 4; i++)
    a += i;

  std::cout << a << std::endl;

  // review question 4
  int b = 6;

  for(int i = 0; i < 5; i++){
    if (b < 5)  b = 0;
    b += i;
  }
  
  std::cout << b << std::endl;

  return 0;
}
