#include <iostream>

bool isEven(int);
int sec(int);

int main(){
  int x = 3;

  std::cout << x << " : " << sec(x) << std::endl;

  return 0;
}

bool isEven(int n){
  if(n % 2 == 0) return true;
  return false;
}

int sec(int n){
  int y = 2;
  
  for(int i = 1; i <= n; i++)
    if(isEven(i)) y += i;

  return y;
}
