#include <iostream>

using namespace std;

int main() {
  int red=1;
  int blue=2;
  int green=3;
  int yellow=4;
  int orange=5;
  int brown=6;
  int black=7;
  int purple=8;
  int white=9;

  int ground=1;
  int root=2;
  int trunk=3;
  int bush=4;
  int tree=5;
  int grass=9;
  int plant=6;

  //1
  if((red + blue) == green){
    int herbs = plant;
    printf("Herbs\n");
  }
  else{
    int notPlant = ground;
    printf("Not Plants\n");
  }
  //2
  if(orange / yellow == red){
    int colorsLeft = red;
    printf("colorsLeft %d\n", colorsLeft);
  }
  
  int myColor = black;
  //3
  switch(myColor){
    case 1:
      printf("Red\n");
      break;
    case 2:
      printf("Blue\n");
      break;
    case 3:
      printf("Green\n");
      break;
    case 4:
      printf("Yellow\n");
      break;
    case 5:
      printf("Orange\n");
      break;
    case 6:
      printf("Brown\n");
      break;
    case 7:
      printf("Black\n");
      break;
    case 8:
      printf("Purple\n");
      break;
    case 9:
      printf("White\n");
      break;

  }
  //4
  int x = 51 % 2;
  if(x == ground){
    printf("Odd\n");
  }
  else{
    printf("Even\n");
  }

  //5
  for(int i = ground; i <= tree; i++){
    printf("Trees have at least %d different parts\n", i);
  }

  //6
  int t = plant;
  printf("Plant's index is: %d\n", t);

  //7
  int test = red | yellow;
  printf("OR Operator %d\n", test);

  //8
  int andOP = yellow & orange;
  printf("AND Operator %d\n", andOP);

  //9
  int k = 0;
  while(k <= white){
    printf("while Loop %d\n", k);
    k++;
  }

  //10
  int q = 10;
  int l = q - green;
  if(l == 7){
    printf("subtraction %d", l);
  }
}