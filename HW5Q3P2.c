#include <stdio.h>
#include <time.h>

int main(void) {
  double time = 0.0;
  
  clock_t start = clock();

  int arr[3][4] = {
    {1, 2,  3,  4},
    {5, 6,  7,  8},
    {9, 10, 11, 12}
  };

  int *ptr = &arr[0][0];

  for(int i = 0; i < 3; i ++){
    for(int j = 0; j < 4; j++){
      *(ptr + i + j) = 10 + j + i;
    }
  }

  for(int i = 0; i < 3; i ++){
    for(int j = 0; j < 4; j++){
      printf("%d ", *(ptr + i + j));
    }
    printf("\n");
  }

  clock_t end = clock();

  time += (double)(end - start) / CLOCKS_PER_SEC;
  printf("%f", time);

  return 0;
}