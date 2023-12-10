class True_False{
  static public void main(String[] args){
    boolean y = false;

    y = !y;

    boolean x = true;

    System.out.println(x + " and not " + !y + " is " + (x && y));
  }
}
