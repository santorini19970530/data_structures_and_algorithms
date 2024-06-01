class Check_Sum{
  public static void main(String[] args){
    int x = 2;

    System.out.println(x + " is even : " + isEven(x));
  }

  static boolean isEven(int n){
    if(n % 2 == 0) return true;
    return false;
  }
}
