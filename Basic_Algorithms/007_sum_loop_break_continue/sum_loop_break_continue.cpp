#include <iostream>

int main(){
  int x = 1;
  int y = 0;
  
  while (x < 11){
    y += x;
    x += 1;
    break;
  }

  std::cout << x << " and " << y << std::endl;

  std::cout << "\n" << std::endl;

  int n = 2;

  for (int i = 0; i < 2; i++){
    n *= 2;
    continue;
  }
  std::cout << n << std::endl;

  return 0;
}
