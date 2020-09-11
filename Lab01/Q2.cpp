#include <iostream>
using namespace std;

/* Write a C++ program to print the area and circumference of a circle with diameter 10*/

int main()
{
  //STEP 1: name variable
  double area, circumference, radius;
  double diameter = 10;
  double pi = 3.14;

  //STEP 2: add operations
  //change diameter to radius
  radius = diameter / 2;

  //operate circumference
  circumference = 2 * pi * radius;

  //operate area
  area = pi * radius * radius;

  //STEP 3: print out result
  cout << "Circumference with diameter 10 = "<< circumference << endl;
  cout << "Circle area with diameter 10 = "<< area << endl;
  
  return 0;
}