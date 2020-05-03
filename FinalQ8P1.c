#include <stdio.h>

int main(void) {
  int j = -3;
  for(int i = 0; i < 3; i++){
    printf("before j = %d\n",j);
    if(j + 2 == 3){
      j--;
    }
    else if(j + 2 == 2){
      j--;
    }
    else if(j + 2 == 0){
      j +=2;
    }
    else{
      j = 0;
    }
    printf("j = %d\n",j);
    if(j > 0)
      return(0);
    j = 3 - i;
    printf("after j = %d\n",j);
  }
}