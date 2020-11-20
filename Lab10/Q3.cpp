#include <iostream>
using namespace std;

//Function prototype
int sumDigits (int&);

//Main function
int main(){
    //Variable declaration
    int number; 

    //Display request to Input
    cout << "What is your number = ";
    cin >> number;

    //assign number to value
    int value = number;

    //Use while loop to display each digit when summing
    while (value > 0){
        int digit = value % 10;
        cout << digit;
        int newDigit = value / 10;
        if (newDigit > 0){
          cout << " + ";
        }
        value /= 10;
    }

    //Display result after invoke sumDigits function
    cout << " = " << sumDigits (number);

    return 0;
}

//SumDigits function
int sumDigits (int& number){
    
    //Variable Declaration
    int sum = 0;

    //Looping to take the last digit and assign it to sum variable
    while (number > 0){
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}