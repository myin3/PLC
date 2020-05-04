public class FinalQ5 {
  public static void main(String[] args) {
    int i, j;
    boolean reject = false;
    int [][] x = new int[5][5];
    x[1][1] = 1;
    for(i = 1; i < x[0].length; i++){
      for(j = 1; j < x[1].length; j++){
        if(x[i][j] != 0){
          reject = true;
          break;
        }
      }
      if(reject == true){
        reject = false;
        continue;
      }
      System.out.println("First all-zero row is " + i);
      break;
    }
  }
}