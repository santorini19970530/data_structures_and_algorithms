// this is C++ STL version

// reference : https://en.cppreference.com/w/cpp/container/stack

// need the linked list for simulating the internal operation

#include <iostream>
#include <stack>

int thing(int);

int main(){
  /* video example 1 */
  // new Stack s
  std::stack <int> stk1;

  stk1.push(2);  // PUSH[2, s]
  stk1.push(4);  // PUSH[4, s]
  stk1.pop();    // POP
  stk1.pop();      // POP
  
  // top
  int x = stk1.top();
  std::cout << "top of stk1: " << x << std::endl;
  
  // empty
  bool y = stk1.empty();
  std::cout << "empty? : " << std::boolalpha << y << std::endl;

  std::cout << "----------" << std::endl;

  /* video example 2 */
  // new Stack s
  std::stack <int> stk2;

  stk2.push(2);
  
  for(int i = 3; i < 10; i++){
    stk2.pop();
    stk2.push(i);
  }

  x = stk2.top();
  std::cout << "top of stk2: " << x << std::endl;

  //review question 8
  
  // new Stack s
  std::stack <int> stk3;

  // PUSH[1, s]
  stk3.push(1);

  /*
  for 1 <= i <= 4 do
    PUSH[i, s]
  end for
  */
  for(int i = 0; i < 4; i++)
    stk3.push(i+1);

  // x = 1
  x = 1;

/*
  while EMPTY[s] = FALSE do
    x = x + TOP[s]
    POP[s]
  end while
*/
  while(!stk3.empty()){
    x += stk3.top();
    stk3.pop();
  }

  std::cout << "x : " << x << std::endl;

  // review question 10
  std::cout << "thing(8) : " << thing(8) << std::endl;

  return 0;
}

int thing(int n){
  if(n < 3) return 1;

  std::stack<int> stk;

  stk.push(1);
  stk.push(1);

  for(int i = 2; i < n; i++){
    int x = stk.top();
    stk.pop();

    int y = stk.top();
    
    stk.push(x);
    stk.push(x + y);
  }

  return stk.top();
}
