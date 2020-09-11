#include <iostream>
using namespace std;

/* Write a C++ program to swap the value of the variable and print the result
Given variable: a=7 b=4
Expected outpit: a=4 b=7 */

int main()
{
  //STEP 1: name variable
  int a = 7;
  int b = 4;
  int stayVariable;

  //STEP 2: swap the variable
  stayVariable = a;
  a = b;
  b = stayVariable;

  //STEP 3: print out result
  cout << "before swap - a = 7 and b = 4" << endl;
  cout << "after swap - a = " << a << ", b =  "<< b << endl;
  
  return 0;
}