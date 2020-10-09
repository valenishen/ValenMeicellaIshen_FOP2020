#include <iostream>
using namespace std;

int main() {
  //Variable Declaration
  float balance = 500;
  float change;
  int decision;
  char again;

  //Display Request Input
  cout << "Welcome to Valen Bank\n";

  //Make condition
  do{
    //Display Menu
    cout << "\nMenu\nType '1' if you want to check your balance\nType '2' if you want to deposit\nType '3' if you want to withdraw\nType '4' to exit"<< endl;
    cin >> decision;

    //Condition depending on the choice
    switch (decision){
    case 1 :
      cout << "Your balance is $" << balance << endl;
      break;

    case 2 :
      cout << "Your remaining balance is $" << balance << "\nEnter the price value you want to deposit = ";
      cin >> change;

      balance += change;
      cout << "\nTransaction is Successfull\n" << "Your remaining balance is $" << balance;
      break;
      
    case 3 :
      cout << "Your remaining balance is $" << balance << "\nEnter the price value you want to withdraw = ";
      cin >> change;

      balance -= change;
      if (balance < 0){
        cout << "There's not enough balance" << endl;
        balance += change;
        break;
      }
      else {
        cout << "\nTransaction is Successfull\n" << "Your remaining balance is $" << balance;
      break;
    }

    case 4 :
      cout << "Thank you for coming" << endl;
    }

    cout << "\nDo you want to continue? if yes type 'y' to go back to the Menu\n";
    cin >> again;
  } while (again == 'y');

  return 0;
}