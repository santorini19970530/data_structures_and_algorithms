class Powers{
  static public void main(String[] args){
    int result = powers(3);
    
    if(result > 0)
      System.out.println(result);
    else
      System.out.println("false");
  }

  static int powers(int n){
    int y = 0;

    while(Math.pow(2, y) <= n){
      if(Math.pow(2, y) == n) return y;
      y++;
    }
    return -1;  // that mean false
  }
}
