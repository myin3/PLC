#include <stdio.h>

int main(void) {
  int first = 1, second = 2, third = 3, min, mid, max;

  if(first < second){
    min = first;
    max = second;
  }
  else{
    min = second;
    max = first;
  }
  if(third < min){
    mid = min;
    min = third;
  }
  else if(third < max){
    mid = third;
  }
  else{
    mid = max;
    max = third;
  }




  printf("min: %d, mid: %d, max: %d", min, mid, max);
}