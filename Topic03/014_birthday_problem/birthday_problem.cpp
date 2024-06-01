#include<iostream>

int main(){
  int m[3];
  m[0] = 2;
  m[1] = 3;
  m[2] = 1;
  int i = 0, j = 0, k = 0;
  int total = i + j + k;

  for(i= 0; i <= m[0]; i++)
    for(j = 0; j <= m[1]; j++)
      for(k = 0; k <= m[2]; k++)
        if(i + 2 * j + 3 * k == 6){
        std::cout << "possible combination : " << 
        "i : " << i << 
        " j : " << j << 
        " k : " << k;
          if(i + j + k > total){
            total = i + j + k;
            std::cout << " result : " << total << std::endl;
          }
          else
            std::cout << " not greater then last possible outcome" << std:: endl;
      }

  return 0;
}
