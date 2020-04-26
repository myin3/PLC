import java.util.*;
import java.io.*;

public class front {

  static int charClass;
  static String nextChar;
  static String lexeme;
  static int lexLen;
  static int nextToken;
  static File in_fp;
  static int LETTER = 0;
  static int DIGIT = 1;
  static int UNKNOWN = 99;
  static Scanner sc;




  public static int getChar(String stoken){
    HashMap<String, Integer> nextc = new HashMap<String,Integer>();
    nextc.put("=", 20);
    nextc.put("+", 21);
    nextc.put("-", 22);
    nextc.put("*", 23);
    nextc.put("/", 24);
    nextc.put("(", 25);
    nextc.put(")", 26);
    nextc.put("%", 27);

    if(nextc.containsKey(stoken)){
      nextToken = nextc.get(stoken);
      lexeme = stoken;
    }
    else if(stoken.matches("[a-zA-Z]")){
      nextToken = 0;
      lexeme = stoken;
      getChar(sc.next());
    }
    else if(stoken.matches("[a-zA-Z]+")){
      nextToken = 11;
      lexeme = stoken;
      getChar(sc.next());
    }
    else if(stoken.matches("[0-9]*")){
      nextToken = 1;
      lexeme = stoken;
      getChar(sc.next());
    }
    else{
      nextToken = 99;
      lexeme = "UNKNOWN";
 
    }

    System.out.println("Next token is: " + nextToken + ", Next lexeme is: " + lexeme);

    return nextToken;
  }


}