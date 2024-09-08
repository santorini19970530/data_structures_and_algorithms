class Sum_Loop_Break_Continue{
  static public void main(String[] args){
    int x = 1, y = 0;

    while(x < 11){
      y += x;
      x++;
      break;
    }

    System.out.println(x + " and " + y);

    int n = 2;

    for(int i = 0; i < 2; i++){
      n *= 2;
      continue;
    }

    System.out.println(n);
  }
}
