#include <stdio.h>
#include <time.h>

int main(void) {
  double time = 0.0;

  clock_t start = clock();
  int var [3][4] = {0};
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 4; j++){
        var[i][j] = 10 + j + i;
      }
    }
  printf("%d", var[0][0]);
  printf(" %d", var[0][1]);
  printf(" %d", var[0][2]);
  printf(" %d\n", var[0][3]);
  printf("%d", var[1][0]);
  printf(" %d", var[1][1]);
  printf(" %d", var[1][2]);
  printf(" %d\n", var[1][3]);
  printf("%d", var[2][0]);
  printf(" %d", var[2][1]);
  printf(" %d", var[2][2]);
  printf(" %d\n", var[2][3]);



  clock_t end = clock();

  time += (double)(end - start) / CLOCKS_PER_SEC;
  printf("%f", time);
}