class Sum_The_Evens{
  static boolean isEven(int n){
    if(n % 2 == 0) return true;
    return false;
  }

  static int sec(int n){
    int y = 2;

    for(int i = 1; i <= n; i++)
      if(isEven(i)) y+= i;

    return y;
  }

  static public void main(String[] args){
    int x = 3;

    System.out.println(x + " : " + sec(x));
  }
}
