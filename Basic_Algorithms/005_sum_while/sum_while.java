class Sum_While{
  public static void main(String[] args){

    // video example
    int x = 1, y = 0;

    while(x < 11){
      y += x;
      x ++;
    }

    System.out.println(x + " and " + y);

    // review question 5
    int a = 1, i = 0;

    while(i < 4){
      a *= 2;
      i++;
    }

    System.out.println(a);

    // review question 6
    // this will cause infinity loop
    /*
    int c = 1, d = 0;

    while(c > 0){
      d += c;
      c++;
    }
    */
  }
}
