#include <iostream>
using namespace std;

/* Write a C++ program to define time value in 24-hour clock system into 12-hour clock system. 14.00, 21.00 */

int main() 
{
  //STEP 1: name variable
  //assing 14 to hour 1
  int hour1 = 14;

  //assign 21 to hour 2
  int hour2 = 21;

  //STEP 2: operate with modulus
  //modulus hour 1 with 12 so we have remainder 2 and assign it to clock1
  int clock1 = hour1 % 12;

  //modulus hour 2 with 12 so we have remainder 9 and assign it to clock2
  int clock2 = hour2 % 12;

  //STEP 3: give terms if > 12 so pm, and display it
  if ((hour1 > 12 && hour2 > 12) || (hour1 > 12 || hour2 > 12)){
    cout << "The clock is " << clock1 << " pm" << endl;
    cout << "The clock is " << clock2 << " pm" << endl;
  } 
  
  //additional code if the hour change to less than 12, if < 12 so am
  else{
    cout << "The clock is " << clock1 << " am" << endl;
    cout << "The clock is " << clock2 << " am" << endl;
  }

  return 0;
  }