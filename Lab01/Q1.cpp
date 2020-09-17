#include <iostream>
using namespace std;

/* Write a C++ program to print the result of arithmatic operation between 12 and 5 */

int main()
{
  //STEP 1: name variable
  // a is for number 1
  int a = 12;
  // b is for number 2
  int b = 5;
  //additional variables for the result of operations
  int addition, subtraction, multiplication, remainder;
  double division;

  //STEP 2: give operations
  //Addition
  addition = a + b;
  
  //Subtraction
  subtraction = a - b;

  //multiplication
  multiplication = a * b;

  //division
  division = (double)a / (double) b;

  //remainder
  remainder = a % b;

  //STEP 3: Print out Result
  // display addition's result
  cout << "12 + 5 = " << addition << endl;

  // display subtraction's result
  cout << "12 - 5 = " << subtraction << endl;

  // display multiplication's result
  cout << "12 * 5 = " << multiplication << endl;

  // display division's result
  cout << "12 / 5 = " << division << endl;
  
  // display remainder's result
  cout << "12 % 5 = " << remainder << endl;

  return 0;

}