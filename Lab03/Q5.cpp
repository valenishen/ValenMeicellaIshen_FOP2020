#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  //Declare num to float with random number
  srand(time(NULL));
  float num = rand() % 100, answer;
  
  //Display request input and assign to answer
  cout << "Hello, Welcome to SEGAME\n" 
       << "How to Play: Quess my number, the range is from 1 - 100!\n" 
       << "Are you ready?\n"
       << "So, what's my number?" << endl;
  cin >> answer; 

  //Make a condition range 1 - 100
  if (answer > 0 && answer <= 100){
    if (num == answer){
      cout << "Yeay! You're Right! Great Job" << endl;
    } else if (num < answer) {
      cout << "Ups! your number is too high, my number is = " << num << endl;
    } else {
      cout << "Nope! your number is too low, my number is = " << num << endl;
    }
  } else {
    cout << "I said 1 - 100!" << endl;
  }
  return 0;
}