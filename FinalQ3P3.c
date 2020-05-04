#include <stdio.h>

void assign();
void express();
void factor();
void var();
/*
<bool_expr> -> < boole > || <bool> | <boole>
*/
void bool_expr(){
  printf("Enter <assign>\n");
  boole();
  while(nextToken == OR_OP){
    lex();
    boole();
  }
  printf("Exit <assign>\n");
}
/*
<boole> -> < arith > && <arith> | <arith>
*/
void boole(){
  printf("Enter <boole>\n");
  arith();
  while(nextToken == AND_OP){
    lex();
    arith();
  }
  printf("Exit <boole>\n");
}
/*
<arith> -> < expon > + <expon> | < expon > - <expon> | <expon>
*/
void arith(){
  printf("Enter <arith>\n");
  var();
  while(nextToken == ADD_OP || nextToken == SUB_OP){
    lex();
    expon();
  }
  printf("Exit <arith>\n");
}

/*
<expon> -> < var > * <var> | < var > / <var> | < var > % <var> | <var>
*/
void expon(){
  printf("Enter <expon>\n");
  var();
  while(nextToken == MULT_OP || nextToken == DIV_OP || nextToken == MOD_OP){
    lex();
    var();
  }
  printf("Exit <expon>\n");
}
/*
<var> -> <id> | <int_lit> | ( <bool_expr> )
*/
void var(){
  printf("Enter <var>\n");
  if(nextToken == IDENT || nextTOken == INT_LIT){
    lex();
  }
  else if (nextToken == LEFT_PAREN){
    lex();
    boole();
    if(nextToken == RIGHT_PAREN){
      lex();
    }
    else{
      error();
    }
  }
  else{
    error();
  }
  printf("Exit <var>\n");
}
