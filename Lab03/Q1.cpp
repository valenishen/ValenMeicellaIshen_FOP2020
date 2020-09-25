#include <iostream>
using namespace std;

int main ()
{
  //Declare num (number) to int
  int num;

  //Display request to input number
  cout << "Let's see what type is your number? Even or Odd?\n" << "Enter your number = ";

  //Assign input to num
  cin >> num;

  //Make condition with if else statement
  if (num % 2 == 0){
    cout << "Your number is even!" << endl;
  } else {
    cout << "Your number is odd!" << endl;
  }
  
return 0;
}