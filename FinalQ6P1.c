#include <stdio.h>

int main(void) {
  int first = 1, second = 2, third = 3, max, mid, min;
  if(first < second){
    if(first < third){
      min = first;
      if(second < third){
        max = third;
        mid = second;
      }
      else{
        max = second;
        mid = third;
      }
    }
    else{
      min = third;
      max = second;
      mid = first;
    }
  }
  else{
    if(second < third){
      min = second;
      if(first < third){
        max = third;
        mid = first;
      }
      else{
        max = first;
        mid = third;
      }
    }
  }
  printf("min: %d, mid: %d, max: %d", min, mid, max);
}