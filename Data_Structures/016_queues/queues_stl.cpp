// this is C++ STL version

// need the linked list for simulating the internal operation

#include <iostream>
#include <queue>

int qFunc(int);

int main(){
  /* example from video */
  // new Queue q
  std::queue <int> que1;

  que1.push(1);  // enqueue
  que1.push(2);
  que1.pop();    // dequeue
  que1.push(1);

  // head
  std::cout << "head : " << que1.front() << std::endl;
  // tail
  std::cout << "tail : " << que1.back() << std::endl;
  // empty
  std::cout << "empty? : " << std::boolalpha << que1.empty() << std::endl;

  /* review question 7 */
  // new Queue q
  std::queue<int> que2;

  que2.push(1);

  for(int i = 1; i <=5; i++){
    que2.push(i * que2.front());
    que2.pop();
  }

  std::cout <<  "x : " << que2.front() << std::endl;

  int a = qFunc(5);
  std::cout << "a : " << a << std::endl;
  
  return 0;
}

/* review question 9 */
int qFunc(int n){
  std::queue<int> que3;

  for(int i = 0; i < n; i++)
    que3.push((i+1) % 2);

  int x = 0;

  while (!que3.empty()){
    x += que3.front();
    que3.pop();
  }

  return x;  
}
