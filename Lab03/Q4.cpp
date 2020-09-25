#include <iostream>
using namespace std;

int main ()
{
  //Declare num1 and num2 to float for the input
  float num1, num2;
  //Declare operation and a b c d to char
  char operation, a = 'a', b = 'b', c = 'c', d = 'd';

  //Display request to input 2 number and assign it to num1 and num2
  cout << "Please enter 2 number\n";
  cout << "First number = ";
  cin >> num1 ;
  cout << "Second number = ";
  cin >> num2;

  //Display request what operation do the user want and assign it to operation
  cout << "What operations do you want?\n" 
       << "a. Addition b. Subtraction c. Multiplication d. Division \n" 
       << "Operation = ";
  cin >> operation;

  /* Make a condition 
  if input = a, use addition
  if input = b, use Subtraction
  if input = c, use Multiplication
  if input = d, use division 
  */
  if (operation == a){
    cout << "Addition\n" << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  } else if (operation == b){
    cout << "Subtraction\n" << num1 << " - " << num2 << " = " << num1 - num2 << endl;
  } else if (operation == c){
    cout << "Multiplication\n" << num1 << " * " << num2 << " = " << num1 * num2 << endl;
  } else if (operation == d){
      if (num2 != 0){
        cout << "Division\n" << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      } else {
        cout << "Please do not enter 0 to second number if division, because the answer is undefine";
      }
  } else {
    cout << "Please enter a / b / c / d with lowercase" << endl;
  }

return 0;
/* char operation;
a = addition, s = subtraction, m = multiplication, d = division

switch (operation)
{
  case 'a':
  cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  break;

  case 's':
  cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
  break;

  case 'm':
  cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
  break;

  case 'd':
  if (num2 != 0) {
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
  } else {
    cout << "Nope u/0 = undefine" << endl;
  }
  break;
} */

}
