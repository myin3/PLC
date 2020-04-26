#include <iostream>

using namespace std;

enum colors{
  red = 1,
  blue,
  green,
  yellow,
  orange,
  brown,
  black,
  purple,
  white
};


enum trees{
  ground = 1,
  root,
  trunk,
  bush,
  tree,
  grass = 9,
  plant
};

int main() {
  //1
  if((red + blue) == green){
    trees herbs = plant;
    printf("Herbs\n");
  }
  else{
    trees notPlant = ground;
    printf("Not Plants\n");
  }
  //2
  if(orange / yellow == red){
    colors colorsLeft = red;
    printf("colorsLeft %d\n", colorsLeft);
  }
  
  colors myColor = black;
  //3
  switch(myColor){
    case red:
      printf("Red\n");
      break;
    case blue:
      printf("Blue\n");
      break;
    case green:
      printf("Green\n");
      break;
    case yellow:
      printf("Yellow\n");
      break;
    case orange:
      printf("Orange\n");
      break;
    case brown:
      printf("Brown\n");
      break;
    case black:
      printf("Black\n");
      break;
    case purple:
      printf("Purple\n");
      break;
    case white:
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
  trees t = plant;
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