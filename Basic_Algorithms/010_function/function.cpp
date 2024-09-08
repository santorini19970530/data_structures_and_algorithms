#include <iostream>
#include <cmath>

int myFunction(int);

int main(){

  std::cout << myFunction(5) << std::endl;

  return 0;
}

int myFunction(int m){
  int x = (int)std::floor(m / 2);

  for(int i = 0; i < 10; i++)
    x = m + x + i;

  return x;
}
