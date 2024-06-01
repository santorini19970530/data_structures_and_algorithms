class Sum_Loop{
  public static void main (String[] args){
    // video example
    int x = 1;

    for(int i = 2; i <= 10; i++)
      x += i;

    System.out.println(x);

    // review question 3
    int a = 4;

    for(int i = 0; i < 4; i++)
      a += i;

    System.out.println(a);

    // review question 4
    int b = 6;

    for(int i = 0; i < 5; i++){
      if(b < 5) b = 0;
      b += i;
    }

    System.out.println(b);
  }
}
