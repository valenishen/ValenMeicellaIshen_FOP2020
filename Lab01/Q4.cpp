#include <iostream>
using namespace std;

/* Write a C++ program to compute the total and average of three numbers. 17, 23, 49 */

int main()
{
  //STEP 1: Name variable
  float a = 17, b = 23, c = 49;
  float total;
  float average;

  //STEP 2: Operate total
  total = a + b + c;

  //STEP 3: Operate average
  average = total / 3;

  //STEP 4: Print out result
  cout << "Total of 17 + 23 + 49 = " << total << endl;
  cout << "The Average is " << average << endl;

  return 0;

}
