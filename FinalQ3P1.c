#include <stdio.h>

void boole();
void equality();
void express();
void cond();
void arith();
void var();
/*
<boole> -> <equality> || <equality> | <equality> && <equality> | <equality>
*/
void boole(){
  printf("Enter <boole>\n");
  equality();
  while (nextToken == OR_OP || nextToken == AND_OP){
    lex();
    equality();
  }
  printf("Exit <boole>\n");

}
/*
<equality> -> <express> == <express> | <express> != <express> | <express>
*/
void equality(){
  printf("Enter <equality>\n");
  express();
  while(nextToken == EQUALITY_OP || nextToken == INEQUALITY_OP){
    lex();
    express();
  }
  printf("Exit <equality>\n");
}
/*
<express> -> <cond> > <cond> || <cond> >= <cond> | <cond> < <cond> | <cond> <= <cond> | <cond>
*/
void express(){
  printf("Enter <express>\n");
  cond();
  while(nextToken == GREATER_OP || nextToken == GREATEREQ_OP || nextToken == LESS_OP || nextToken == LESSEQ_OP){
    lex();
    cond();
  }
  printf("Exit <express>\n");
}
/*
<cond> -> <arith> + <arith> | <arith> - <arith> | <arith>
*/
void cond(){
  printf("Enter <cond>\n");
  arith();
  while(nextToken == ADD_OP || nextToken == SUB_OP){
    lex();
    arith();
  }
  printf("Exit <cond>\n");
}
/*
<arith> -> <var> * <var> | <var> / <var> | <var> % <var> | <var>
*/
void arith(){
  printf("Enter <arith>\n");
  var();
  while(nextToken == MULT_OP || nextToken == DIV_OP || nextToken == MOD_OP){
    lex();
    var();
  }
  printf("Exit <arith>\n");
}
/*
<var> -> <int_lit> | <id> | ( <boole> )
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
