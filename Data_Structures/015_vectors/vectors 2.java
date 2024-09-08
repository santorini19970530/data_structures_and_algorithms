// util vession

import java.util.LinkedList;
import java.util.Vector;

class VECTOR{
  // private
  Vector<Integer> vec = new Vector<Integer>();

  // constructor
  public Vector<Integer> Vector(){
    return vec;
  }

  public void setSize(int n){
    vec.setSize(n);
  }

  // public
  public int getLength(){
    return vec.size();
  }

  public void store(int pos, int val){
    vec.set(pos, val);
  }

  public int select(int pos){
    return vec.get(pos);
  }
}

class MAIN{
  // main
  static public void main(String[] args){
    /* example in video */
    VECTOR v1 = new VECTOR();
    v1.setSize(4);
  
    for(int i = 0; i < v1.getLength(); i++)
      v1.store(i, i+1);

    for(int i = 0; i < v1.getLength(); i++)
      System.out.print(v1.select(i) + " ");
    System.out.println("");

    /* review question 6 */
    VECTOR v2 = new VECTOR();
    v2.setSize(4);

    v2.store(0, 2);

    for(int i = 1; i < v2.getLength(); i++)
      v2.store(i, (i + 1) * v2.select(i - 1));

    System.out.println("x : " + v2.select(3));
  }
}
