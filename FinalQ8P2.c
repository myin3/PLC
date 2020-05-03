#include <stdio.h>

int main(void) {
  int j = -3;
  for(int i = 0; i < 3; i++){
    printf("before j = %d\n",j);
    if(j + 2 == 3){
      goto case2;
    }
    else if(j + 2 == 2){
      goto case2;
    }
    else if(j + 2 == 0){
      goto case0;
    }
    else{
      goto defaultCase;
    }

    case2:
    j--;
    goto end;
    case0:
    j+=2;
    goto end;
    defaultCase:
    j=0;
    goto end;

    end:

    printf("j = %d\n",j);
    if(j > 0)
      return(0);
    j = 3 - i;
    printf("after j = %d\n",j);
  }

}