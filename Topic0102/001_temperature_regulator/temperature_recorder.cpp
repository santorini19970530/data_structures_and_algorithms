#include <iostream>

int main(){
  float t = 10.0;
  int target = 20;

if(t < (float)target)
    t = t + 0.5;

  std::cout << t << std::endl;

  return 0;
}
