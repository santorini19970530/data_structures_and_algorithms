#include <iostream>
#include <cmath>

int powers(int);

int main(){
  int result = powers(3);
  
  if(result > 0)
    std::cout << result << std::endl;
  else
    std::cout << "false" << std::endl;

  return 0;
}

int powers(int n){
  int y = 0;
  
  while(pow(2, y) <= n){
    if (pow(2, y) == n) return y;
    y++;
  }
  return -1;  // that mean false
  /* as -1 is not considered as false in C++ (it has value), need the function to be returned as integer and let the main to determine next step */
}
