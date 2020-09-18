#include <iostream>
using namespace std;

int main()
{
  //STEP 1: declare variable length, width, area, and perimeter to float
  float length, width, area, perimeter;

  //STEP 2: Display output and read input from user
  //Display request to input length
  cout << "Input rectangle's length = ";
  //Read input and assign to length
  cin >> length;

  //Display request to input width
  cout << "Input rectangle's width = ";
  //Read input and assign to width
  cin >> width;

  //STEP 3: Operate the value
  //operate area = L*W
  area = length * width;
  //operate perimeter = 2L + 2W
  perimeter = 2 * (length + width);

  //STEP 4: Display result
  //Display area's result
  cout << "Your rectangle's area = " << area << endl;
  //Display perimeter's result
  cout << "Your rectangle's perimeter = " << perimeter << endl;

  return 0;
}