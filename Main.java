import java.util.*;
import java.io.*;


public class Main {


  public static void main(String[] args) throws FileNotFoundException{
    front object = new front();
    rda rdaobject = new rda();
    File file = new File("test.txt");
    Scanner scan = new Scanner(file);
    while(scan.hasNextLine()){
      Scanner check = new Scanner (scan.nextLine());
      object.sc = check;
      while(check.hasNext()){
        String x = check.next();
        object.getChar(x);
        rdaobject.che = x;
        rdaobject.expr();
      }
    }
  }

}