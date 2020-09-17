#include <iostream>
using namespace std;

/* Write a C++ program to swap the value of the variable and print the result
Given variable: a=7 b=4
Expected outpit: a=4 b=7 */

int main()
{
  //STEP 1: name variable
  //assign 7 to a (number 1)
  int a = 7;

  //assign 4 to b (number 2)
  int b = 4;

  //declare stayVariable / original value of a variable to be an integer
  int stayVariable;

  //STEP 2: swap the variable
  //assign a to stayVariable > stayVariable = 7
  stayVariable = a;

  //assign b to a > a = 4
  a = b;

  //assign stayVariable to b > b = 7
  b = stayVariable;

  //STEP 3: print out result
  //display value before swap
  cout << "before swap - a = 7 and b = 4" << endl;

  //display value after swap
  cout << "after swap - a = " << a << ", b =  "<< b << endl;
  
  return 0;
}