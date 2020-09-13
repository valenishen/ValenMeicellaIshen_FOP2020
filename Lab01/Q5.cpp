#include <iostream>
using namespace std;

/* Write a C++ program to define time value in 24-hour clock system into 12-hour clock system. 14.00, 21.00 */

int main() 
{
  //STEP 1: name variable
  int hour1 = 14;
  int hour2 = 21;

  //STEP 2: operate with modulus
  int clock1 = hour1 % 12;
  int clock2 = hour2 % 12;

  //STEP 3: give terms if > 12 maka pm, < 12 maka am
  if ((hour1 > 12 && hour2 > 12) || (hour1 > 12 || hour2 > 12)){
    cout << "The clock is " << clock1 << " pm" << endl;
    cout << "The clock is " << clock2 << " pm" << endl;
  } else{
    cout << "The clock is " << clock1 << " am" << endl;
    cout << "The clock is " << clock2 << " am" << endl;
  }

  return 0;
  }