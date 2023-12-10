// util veersion

import java.util.LinkedList;
import java.util.Stack;

class STACK{
  // private
  Stack<Integer> stk = new Stack<Integer> ();

  // constructor
  public Stack<Integer> Stack(){
    return stk;
  }

  // public
  public void push(int n){
    stk.add(n);
  }

  public void pop(){
    stk.pop();
  }

  public boolean isEmpty(){
    return stk.isEmpty();
  }

  public Integer top(){
    int x = 0;

    try{
      x = stk.peek();
    }
    catch(java.util.EmptyStackException e){
      System.out.println("The stack is empty.");
      return null;
    }
    return x;
  }
}

class MAIN{

  // review question 10

  public static Integer thing(Integer n){
    if(n < 3) return 1;

    STACK stk = new STACK();

    stk.push(1);
    stk.push(1);
    
    for(int i = 2; i < n; i++){
      Integer x = stk.top();

      stk.pop();

      Integer y = stk.top();

      stk.push(x);
      stk.push(x + y);
    }

    return stk.top();
  }

  public static void main(String[] args){

    // example 1 in video
    STACK stk1 = new STACK();

    stk1.push(2);
    stk1.push(4);
    stk1.pop();
    stk1.pop();
    
    System.out.println("top of stk1 : " + stk1.top());

    // example 2 in video
    STACK stk2 = new STACK();

    stk2.push(2);
    
    for(int i = 3; i < 10; i++){
      stk2.pop();
      stk2.push(i);
    }

    int x = stk2.top();
    System.out.println("top of stk2 : " + x);

    // review question 8

    STACK stk3 = new STACK();
    
    stk3.push(1);
    
    for(int i = 0; i < 4; i++)
      stk3.push(i + 1);

    x = 1;

    while(!stk3.isEmpty()){
      x += stk3.top();
      stk3.pop();
    }

    System.out.println("x : " + x);

    // review question 10

    System.out.println("thing(8) : " + thing(8));
  }
}
