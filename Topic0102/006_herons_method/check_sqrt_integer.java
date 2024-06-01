class Check_Sqrt_Integer{
  public static void main(String[] args){
    for(int i = 0; i < 20; i++)
      System.out.println("square root of " + i + " is integer : " + isXInteger(i));
  }

  static boolean isXInteger(int n){
    boolean y = false;

    for(int i = 1; i <= n; i++)
        if(i * i == n)
          y = true;

      return y;
    }
}
