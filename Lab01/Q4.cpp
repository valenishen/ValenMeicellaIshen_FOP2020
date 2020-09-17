#include <iostream>
using namespace std;

/* Write a C++ program to compute the total and average of three numbers. 17, 23, 49 */

int main()
{
  //STEP 1: Name variable
  //assign 17 to a, 23 to b, and 49 to c
  float a = 17, b = 23, c = 49;

  //declare total and average to be float
  float total;
  float average;

  //STEP 2: Operate total
  total = a + b + c;

  //STEP 3: Operate average
  average = total / 3;

  //STEP 4: Print out result
  //display total result
  cout << "Total of 17 + 23 + 49 = " << total << endl;

  //display average result
  cout << "The Average is " << average << endl;

  return 0;

}
