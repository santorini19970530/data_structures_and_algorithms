class Check_N{
  static boolean checkN(int n){
    int i = 2;
    
    while(i < n){
      if(n % i == 0) return true;
      i++;
    }

    return false;
  }

  static public void main(String[] args){
    for(int i = 3; i < 20; i++)
      System.out.println(i + " is not prime : " + checkN(i));
  }
}
