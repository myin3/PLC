#include <stdio.h>


int fun(int *k){
  *k += 4;
  return 3 * (*k) - 1;
}

int main(void) {
  int i = 10, j = 10, sum1, sum2;

  sum1 = (i / 2) + fun(&i);
  printf("i = %d\n", i);
  sum2 = fun(&j) + (j / 2);
  printf("j = %d\n", j);

  printf("sum1 %d\n", sum1);
  printf("sum2 %d", sum2);
}