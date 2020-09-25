#include <iostream>
using namespace std;

int main ()
{
  //Declare time, remainingMinutes, minutes to int
  int time, remainingMinutes, minutes;

  //Display request to input the time and assign to time
  cout << "Hey There! What time is it now? " ;
  cin >> time;

  //Make an operation for the input to became integer so we can remainder the minutes 
  time *= 100;
  remainingMinutes = time;
  minutes = remainingMinutes %= 100;

  //Make a condition for the greetings
  if (time >= 0 && time <= 1159 && minutes < 60){
    cout << "Good Morning!" << endl;
  } else if (time >= 1200 && time <= 1759 && minutes < 60){
    cout << "Good Afternoon" << endl;
  } else if (time >= 1800 && time <= 2359 && minutes < 60){
    cout << "Good Evening" << endl;
  } else {
    cout << "There's no time like that!" << endl;
  }

return 0;
}