#include <iostream>
using namespace std;

int main()
{
  //STEP 1: Declare variable celcius and farenheit to float
  float celcius, farenheit;

  //STEP 2: Display request to input celcius value
  cout << "The temperatur in Celcius = ";
  
  //STEP 3: Read in value and assign it to celcius
  cin >> celcius;

  //STEP 4: Operate celcius to farenheit
  farenheit = ((celcius * 9 / 5) + 32);

  //STEP 5: Display result
  cout << "The temperatur in Farenheit = " << farenheit <<endl;

  return 0;
}