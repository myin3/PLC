#include <iostream>
// color may be red (value 0), yellow (value 1), green (value 20), or blue (value 21)
using namespace std;

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
  cout << today;
  cout << "\n";

//2 & 3
  for (int i = Jan; i < May; i++){
    int x = May - i;
    cout << "Spring Semester ends on ";
    cout << x;
    cout << "\n";
  }

  cout << Monday;
  cout << Tuesday;
  //4
  cout << Thursday;
  cout << Saturday;
  //5
  cout << Sunday;
  cout << "\n";

//6 - Does not work
  //colors myColor = blue, yourColor = red;
  //myColor++;

//7
  if (Monday == Sunday){
    cout << "Yes";
  }
  else{
    cout << "No";
  }
  cout << "\n";
//8 Cannot compare two different enumeration types
  // if (Monday == Jan){
  //   cout << "Yes";
  // }
  // else{
  //  cout << "No"; 
  // }


  //9
  cout << Dec;
  cout << " ";
  cout << Nov;
  cout << "\n";



  //10
  years year = nine;
  switch(year){
    case one: cout << "year one"; break;
    case two: cout << "year two"; break;
    case three: cout << "year three"; break;
    case four: cout << "year four"; break;
    case five: cout << "year five"; break;
    case six: cout << "year six"; break;
    case seven: cout << "year seven"; break;
    case eight: cout << "year eight"; break;
    case nine: cout << "year nine"; break;
    case ten: cout << "year ten"; break;
    default: cout << "N/A";
  }




  return 0;
}