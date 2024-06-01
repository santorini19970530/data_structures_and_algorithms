class Eucids_Algorithm{
  static public void main(String[] args){
    int a, b;
    if(args.length == 2){
      a = Integer.parseInt(args[0]);
      b = Integer.parseInt(args[1]);

      System.out.println(a + " " + b + "\'s GCD is " + gcd(a, b) + ".");
    }
    else
      System.out.println("Please input two integers.");
  }

    static int gcd(int x, int y){
      for(int i = 0; i < x + y; i++){
        if(x == y) break;
        if(x > y) x -= y;
        else y -= x;
      }

      return x;
    }

}
