import java.util.*;
import java.io.*;

public class Main {

  public static void check(String str){
    if(str.matches("[0-9]+")){
      System.out.println("Integer Literal: " + str);
    }
    else if(str.matches("[0-9]+.[0-9]+[fF]?")){
      System.out.println("Floating-Point Literal: " + str);
    }
    else if((Character.isAlphabetic(str.charAt(0)) || str.charAt(0) == '_' || str.charAt(0) == '$')){
      boolean variableName = true;
      for(int index = 0; index < str.length(); index++){
        if(str.charAt(index) == ' '){
          variableName = false;
          System.out.println("Error variable name contains whitespace: " + str);
          return;
        }
        else if(!Character.isLetterOrDigit(str.charAt(index))){
          if(str.charAt(index) != '_'){
            if(str.charAt(index) != '$'){
              variableName = false;
              System.out.println("Error unknown character in variable name: " + str);
              return;
            }
          }
        }
      }
      System.out.println("Variable Name: " + str);
    }
    else if(str.charAt(0) == '"' && str.charAt(str.length() -1) == '"'){
      System.out.println("String literal: " + str);
    } 
    else{
      System.out.println("Error: " + str);
    }
  }



  public static void main(String[] args) throws FileNotFoundException {
    File file = new File("test.txt");
    Scanner scan = new Scanner(file);
    while(scan.hasNextLine()){
      Scanner scanCheck = new Scanner(scan.nextLine());
      while(scanCheck.hasNext()){
        check(scanCheck.next());
      }
      scanCheck.close();
    }
    scan.close();
  }
}