class BirthdayProblem{
  static public void main(String[] args){
    int[] m = {2, 3, 1};
    int i = 0, j = 0, k = 0;
    int total = i + j + k;
    
    for(i = 0; i <= m[0]; i++)
      for(j = 0; j <= m[1]; j++)
        for(k = 0; k <= m[2]; k++)
          if(i + 2 * j + 3 * k == 6)
            if(i + j + k > total){
              total = i + j + k;
              System.out.println("i : " + i + ", j : " + j + ", k : " + k + ", result : " + total);
            }
            else
              System.out.println("i : " + i + ", j : " + j + ", k : " + k + ", result : " + "not greater than last possible outcome");
  }
}
