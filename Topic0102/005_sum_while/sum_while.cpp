#include <iostream>

int main(){

  // video example

  int x = 1, y = 0;
  
  while(x < 11){
    y += x;
    x += 1;
  }

  std::cout << x << " and " << y << std::endl;

  // review question 5
  int a = 1, i = 0;

  while(i < 4){
    a *= 2;
    i++;
  }

  std::cout << a << std::endl;

  // review question 6
  // this will cause inifnity loop
  
  /*
  int c = 1, d = 0;
  
  while(c > 0){
    d += c;
    c++;
  }
  */
}
