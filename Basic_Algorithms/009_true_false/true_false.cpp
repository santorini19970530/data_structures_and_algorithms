#include <iostream>

int main(){
  bool y = false;
  
  y = !y;

  bool x = true;

  std::cout << std::boolalpha << x << " and " << std::boolalpha << y << " is " << std::boolalpha << (x && y) << std::endl;

  return 0;
}
