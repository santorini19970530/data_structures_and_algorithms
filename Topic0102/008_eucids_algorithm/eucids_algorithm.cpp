#include <iostream>

int gcd(int, int);

int main(){
  int a,  b;
  
  std::cin >> a >> b;

std::cout << a << " and " << b << "\'s GCD is " << gcd(a, b) << std::endl;

  return 0;
}

int gcd(int x, int y){
  for(int i = 0; i < x + y; i++){
    if(x == y)
      break;
    if(x > y)
      x -= y;
    else
      y -= x;
  }
  return x;
}
