#include <iostream>
#include <new>
#include <ctime>

using namespace std;

void fun1(){
  static int one[100000];
}

void fun2(){
  int two[100000];
}

void fun3(){
  int *three = new int[100000];
}



int main() {
  clock_t begin1 = clock();
  for (int x = 0; x < 100000; x++){
    fun1();
  }
  clock_t end1 = clock();

  clock_t begin2 = clock();

  for (int x = 0; x < 100000; x++){
    fun2();
  }
  clock_t end2 = clock();

  clock_t begin3 = clock();

  for (int x = 0; x < 100000; x++){
    fun3();
  }

  clock_t end3 = clock();


  double ones = end1 - begin1;
  double twos = end2 - begin2;
  double threes = end3 - begin3;


  printf("ones: %f\n", ones);
  printf("twos: %f\n", twos);
  printf("threes: %f\n", threes);

}