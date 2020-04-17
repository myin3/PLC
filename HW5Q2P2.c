#include <stdio.h>

enum years{
  zero,
  one,
  two,
  three,
  four,
  five,
  six,
  seven,
  eight,
  nine,
  ten,
};

enum months{
  Jan,
  Feb,
  March,
  April,
  May,
  June,
  July,
  August,
  Sept,
  Oct,
  Nov = Oct % March,
  //9
  Dec=120 / May
};

enum Days {
  Monday,
  Tuesday,
  Wednesday,
  //3
  Thursday=0,
  Friday,
  Saturday,
  //4
  Sunday=Tuesday - Wednesday
};

enum colors{
  red,
  blue,
  green,
  yellow,
  black
};

int main(){
  //1
  int today = Friday + April + three + two + zero + two + zero;
  printf("%d", today);
  printf("\n");

//2 & 3
  for (int i = Jan; i < May; i++){
    int x = May - i;
    printf("Spring Semester ends on ");
  printf("%d", x);
    printf("\n");
  }

  printf("%d", Monday);
  printf("%d", Tuesday);
  //4
  printf("%d", Thursday);
  printf("%d", Saturday);
  //5
  printf("%d", Sunday);
  printf("\n");

//6 - Does not work
  //colors myColor = blue, yourColor = red;
  //myColor++;

//7
  if (Monday == Sunday){
    printf("Yes");
  }
  else{
  printf("No");
  }
  printf("\n");
//8 Cannot compare two different enumeration types
  // if (Monday == Jan){
  //   cout << "Yes";
  // }
  // else{
  //  cout << "No"; 
  // }


  //9
  printf("%d", Dec);
  printf(" ");
  printf("%d", Nov);
  printf("\n");



  //10
  enum years year = nine;
  switch(year){
    case one: printf("year one"); break;
    case two: printf("year two"); break;
    case three: printf("year three"); break;
    case four: printf("year four"); break;
    case five: printf("year five"); break;
    case six: printf("year six"); break;
    case seven: printf("year seven"); break;
    case eight: printf("year eight"); break;
    case nine: printf("year nine"); break;
    case ten: printf("year ten"); break;
    default: printf("N/A");
  }




  return 0;
}
