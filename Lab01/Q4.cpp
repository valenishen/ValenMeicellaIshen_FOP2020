#include <iostream>
using namespace std;

/* Write a C++ program to compute the total and average of three numbers. 17, 23, 49 */

int main(){
  //STEP 1: name variable
  int number1 = 17, number2 = 23, number3 = 49;
  int total;
  double average;

  //STEP 2: operate
  //total
  total = number1 + number2 + number3;
  
  //average
  average = total / 3;

  //STEP 3: print out result
  cout<< "Total of 17, 23, 49 = " << total << endl;
  cout << "Average of 17, 23, 49 = " << average << endl;

  return 0;

}