// in Java, function is named method instead

class Function{
  static public void main(String[] args){
    System.out.println(myFunction(5));
  }

  static int myFunction(int m){
    int x = (int)Math.floor((float)m / 2);

    for(int i = 0; i < 10; i++)
      x += (m + i);

    return x;
  }
}
