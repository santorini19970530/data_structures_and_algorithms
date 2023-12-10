class Temperature_Recorder{
  public static void main(String[] args){
    float t = 10;
    int target = 20;

    if (t < (float)target)
      t += 0.5;

    System.out.println(t);
  }
}
