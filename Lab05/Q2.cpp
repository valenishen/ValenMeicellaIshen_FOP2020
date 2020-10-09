#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  //Global Variable Declaration
  char addAnswer;
  int answer;
  int correct = 0;
  int chance = 0;

  //Display Request Input
  cout << "Let's test your mathematical skill!\n"
       << "There will be 10 question about arithmetic mathematics, you have to answer it correctly!\n"
       << "What question do you want? +, -, *" << endl;
  cin >> addAnswer;

  //Make condition
  switch (addAnswer){
    case '+' :
    cout << "ADDITION, Okay get READY!" << endl;

    while (chance < 10){
      //Generate random number
    srand(time(NULL));

    //Variable Declaration x, y
    int x = rand() % 100;
    int y = rand() % 100;

    //Question
    cout << x << " + " << y << " = ";
    cin >> answer;
    
    //Check if correct
    if (x + y == answer){
      cout << "Correct" << endl;
      correct++;
    } else {
      cout << "False" << endl;
    }
    chance++;
    }
    break;

    case '-': 
    cout << "SUBTRACTION, Okay get READY!" << endl;
     while (chance  < 10){
      //Generate random number
      srand(time(NULL));

      //Variable Declaration x, y
      int x = rand() % 100;
      int y = rand() % 100;

      //Question
      cout << x << " - " << y << " = ";
      cin >> answer;

      //Check if correct
      if (x - y == answer){
        cout << "Correct" << endl;
        correct++;
      } else {
        cout << "False" << endl;
      }
      chance++;
      }
    break;

    case '*':
    cout << "MULTIPLICATION, Okay get READY!" << endl;
     while (chance < 10){
      //Generate random number
      srand(time(NULL));

      //Variable Declaration x, y
      int x = rand() % 100;
      int y = rand() % 100;

      //Question
      cout << x << " x " << y << " = ";
      cin >> answer;

      //Check if correct
      if (x * y == answer){
        cout << "Correct" << endl;
        correct++;
      } else {
        cout << "False" << endl;
      }
      chance++;
      }
      break;
  }

  if (chance > 9){
    cout << "10 question DONE!\n"
         << "Your got " << correct << " correct answer" << endl;

    if (correct >= 7 && correct <= 10){
      cout << "Therefore, YOU PASS THIS TEST!"<< endl;
    }
    else {
      cout << "Sorry, maybe test again?" << endl;
    }
  }
  return 0;
}