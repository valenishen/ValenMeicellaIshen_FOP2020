#include <iostream>
using namespace std;

int main()
{
  //STEP 1: declare variable for age for this year, last year and next year
  int ageThisYear, ageLastYear, ageNextYear;

  //STEP 2: Display request to input age this year
  cout << "Input your age this year = ";
  cin >> ageThisYear;

  //STEP 3: Operate value with increment and decrement
  //decrement 1 value to show age last year
  ageLastYear = ageThisYear--;

  //increment 1 value to show age next year
  ageNextYear = ++ageThisYear;

  //STEP 4: Display result
  //display ageLastYear
  cout << "Your age last year = " << ageLastYear <<endl;
  //display ageNextYear
  cout << "Your age next year = " << ageNextYear <<endl;

  return 0;
}