import java.util.*;

public class rda extends front{
  static final int IDENT = 11;
  static final int INT_LIT = 10;
  static final int ADD_OP = 21;
  static final int SUB_OP = 22;
  static final int MULT_OP = 23;
  static final int DIV_OP = 24;
  static final int LEFT_PAREN = 25;
  static final int RIGHT_PAREN = 26;
  static final int MOD_OP = 27;
  static int nextToken;
  static String che;


  public static void expr() {
    System.out.println("Enter <expr>");
    term();
    while (nextToken == ADD_OP || nextToken == SUB_OP) {
      getChar(che);
      term();
    }
    System.out.println("Exit <expr>");
  }

  public static void term() {
    System.out.println("Enter <term>");
    factor();
    while (nextToken == MULT_OP || nextToken == DIV_OP || nextToken == MOD_OP) {
      getChar(che);
      factor();
    }
    System.out.println("Exit <term>");
  }

  public static void factor() {
    System.out.println("Enter <factor>");
    if (nextToken == IDENT || nextToken == INT_LIT) {
      getChar(che);
    } 
    else {
      if (nextToken == LEFT_PAREN) {
        getChar(che);
        expr();
        if (nextToken == RIGHT_PAREN) {
          getChar(che);
        } else {
          error();
        }
      }
      error();
    }
    System.out.println("Exit <factor>");
  }

  public static void error(){
    System.exit(0);
  }
}