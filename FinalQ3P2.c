#include <stdio.h>

void assign();
void express();
void factor();
void var();
/*
<assign> -> <id> = <express>
*/
void assign(){
  printf("Enter <assign>\n");
  if(nextToken == IDENT){
    lex();
    while(nextToken == EQUAL_OP){
      lex();
      express();
    }
  }
  printf("Exit <assign>\n");
}
/*
<express> -> < factor > + <factor> | < factor > - <factor> | <factor>
*/
void express(){
  printf("Enter <express>\n");
  factor();
  while(nextToken == ADD_OP || nextToken == SUB_OP){
    lex();
    factor();
  }
  printf("Exit <express>\n");
}
/*
<factor> -> < var > * <var> | < var > / <var> | < var > % <var> | <var>
*/
void factor(){
  printf("Enter <factor>\n");
  var();
  while(nextToken == MULT_OP || nextToken == DIV_OP || nextToken == MOD_OP){
    lex();
    var();
  }
  printf("Exit <factor>\n");
}

/*
<var> -> <id> | <int_lit> | ( <expr> )
*/
void var(){
  printf("Enter <var>\n");
  if(nextToken == IDENT || nextTOken == INT_LIT){
    lex();
  }
  else if (nextToken == LEFT_PAREN){
    lex();
    expr();
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
