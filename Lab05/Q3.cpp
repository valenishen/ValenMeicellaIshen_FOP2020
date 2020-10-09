#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  //Variable Declaration
  int chance = 0;
  char again = 'y';
  
  //Display request input and assign to answer
  cout << "Hello, Welcome to SEGAME\n" 
       << "How to Play: Quess my number, the range is from 1 - 100!\n" 
       << "Are you ready?\n";

  //Make Condition with While
  while (again == 'y'){
    //Declare Random Number
    srand(time(NULL));
    float num = rand() % 100, answer;
    
    //Display Request Input
    cout << "So, what's my number?" << endl;
    cin >> answer; 

    //Make a condition range 1 - 100
    if (answer > 0 && answer <= 100){
      if (num == answer){
        cout << "Yeay! You're Right! Great Job" << endl;
        break;
      } else if (num < answer) {
        cout << "Ups! your number is too high, my number is = " << num << endl;
      } else {
        cout << "Nope! your number is too low, my number is = " << num << endl;
      }
    } 
    else {
      cout << "I said 1 - 100!" << endl;
    }
    
    //Display Request to continue or give up
    cout << "Do you want to continue? (y/n)" << endl;
    cin >> again;
    
    //Increase chance value
    chance++;
  } 
  
  //Display how many times the user try to quest
  cout << "You tried up to " << chance << " times" << endl;
  return 0;
}