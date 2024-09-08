// util version

import java.util.LinkedList;
import java.util.Queue;

class QUEUE{
  // private
  Queue<Integer> que = new LinkedList<Integer>();

  // constructor
  public Queue<Integer> Queue(){
    return que;
  }

  // public
  public Integer head(){
    int x = 0;

    try{
      x = que.peek();
    }
    catch(java.lang.NullPointerException e){
      System.out.println("The queue is empty.");
    }

    return x;
  }

  public boolean isEmpty(){
    return que.isEmpty();
  }

  public void dequeue(){
    if(!que.isEmpty())
      que.remove();
  }

  public void enqueue(int n){
    que.add(n);
  }
}

class MAIN{
  public static void main(String[] args){
    
    // example in video
    QUEUE que1 = new QUEUE();

    que1.head();

    // ENQUEUE[1, q]
    que1.enqueue(1);

    // ENQUEUE[2, q]
    que1.enqueue(2);

    // DEQUEUE[q]
    que1.dequeue();
  
    // ENQUEUE[1, q]
    que1.enqueue(1);

    // x = HEAD[q]
    int x = que1.head();
    System.out.println("x : " + x);

    // review question 7
    
    /*
    new Queue q
    ENQUEUE[1, q]

    for 1 <= i <= 5 do
      ENQUEUE(i x HEAD[q])
      DEQUEUE[q]
    end for

    x = HEAD[q]
    */

    QUEUE que2 = new QUEUE();
    que2.enqueue(1);
    for(int i = 0; i < 5; i++){
      que2.enqueue((i+1) * que2.head());
      que2.dequeue();
    }

    x = que2.head();

    System.out.println("x : " + x);


    x = qFunc(5);
    System.out.println("x : " + x);
  }

    // review question 9
 static public int qFunc(int n){
    /*
    function qFunc(n)
      for 1 <= i <= n do
        ENQUEUE[i mod 2, q]
      end for

      x = 0

      while EMPTY[q] = FALSE do
        x = x + HEAD[q]
        DEQUEUE[q]
      end while

      return x
    end function
    */
    
    QUEUE queue = new QUEUE();
    
    for(int i = 0; i < n; i++)
      queue.enqueue((i+1) % 2);

    int a = 0;

    while(!queue.isEmpty()){
      a += queue.head();
      queue.dequeue();
    }

    return a;
  }
}
