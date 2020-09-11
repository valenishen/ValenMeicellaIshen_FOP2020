#include <iostream>
using namespace std;

int main()
{
  //STEP 1: name variable
  int a = 12;
  int b = 5;
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
  division = a / b;

  //remainder
  remainder = a % b;

  //STEP 3: Print out Result
  cout << "12 + 5 = " << addition << endl;
  cout << "12 - 5 = " << subtraction << endl;
  cout << "12 * 5 = " << multiplication << endl;
  cout << "12 / 5 = " << division << endl;
  cout << "12 % 5 = " << remainder << endl;
}