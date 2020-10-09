#include <iostream>
using namespace std;

int main()
{
  //variable declaration
  int number = 1;

  //make condition
  while (number <= 50){
    ++number;
    if (number > 0 && number % 3 == 0 && number % 5 == 0){
      cout << number << " ZIP ZAP " << endl;
    }
    else if (number > 0 && number % 3 == 0){
      cout << number << " ZIP " << endl;
    }
    else if (number > 0 && number % 5 == 0){
      cout << number << " ZAP " << endl;
    }
  }

  return 0;
}