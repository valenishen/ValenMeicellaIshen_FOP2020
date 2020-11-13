#include <iostream>
using namespace std;

//pow function with parameter x and y
int pow (int x, double y){

    //Variable declaration
    int result = 1;

    //Loop to multiply the number according to the power
    for (int k = 1; k <= y; k++){
        result *= x;
    }

    return result;
}

//sqrt function with parameter x and y
double sqrt (double x){

    /*masih belum ngerti hitungannya, 
    source : https://www.quora.com/How-do-I-write-a-program-for-finding-the-square-root-of-a-number-without-using-the-sqrt-function */

    //Variable declaration and assign the operation
    double x1 = (x * 1.0) / 2; 
    double x2= (x1 + (x / x1)) / 2; 
  
    //Looping
    while(abs(x1 - x2) >= 0.0000001) { 
    x1 = x2; 
    x2 = (x1 + (x / x1)) / 2; 
    } 

    return x2; 
} 

//ceil function with parameter x and y
int ceil (double x){
    //Make the decimal number to integer and increment it
    x = (int) x;
    return ++x;
}

//floor function with parameter x and y
int floor (double x){
    //Make the decimal number to integer and then do nothing to it
    x = (int) x;
    return x;
}

//Main function
int main()
{
    //Variable declaration
    char k,l; //user's want
    double num1, num2; //user's number

    do{
      //Display request to input
    cout << "Annoying Mathematics Calculator!\n"
         << "a. Power a number\n"
         << "b. Square root a number\n"
         << "c. Round up a number\n"
         << "d. Round down a number\n"
         << "What function do you want? ";
    cin >> k;

    //Switch case to satisfy whatever user's want
    switch (k){

        //Invoke pow function
        case 'a': case 'A':
        cout << "\nPOWER\n"
             << "What is the number you want to power? ";
        cin >> num1;
        cout << "What is the number of the power? ";
        cin >> num2;

        cout << num1 << "^" << num2 << " = " 
             << pow (num1, num2);
        break;

        //Invoke sqrt function
        case 'b': case 'B':
        cout << "\nSQUARE ROOT\n"
             << "What is the number you want to square root? ";
        cin >> num1;

        cout << "Square root of " << num1 << " is " 
             << sqrt (num1);
        break;

        //invoke ceil function
        case 'c': case 'C':
        cout << "\nROUND UP DECIMAL NUMBER\n"
             << "What is the decimal number? ";
        cin >> num1;

        cout << "Round up of " << num1 << " is " 
             << ceil (num1);
        break;

        //Invoke floor function
        case 'd': case 'D':
        cout << "\nROUND DOWN DECIMAL NUMBER\n"
             << "What is the decimal number? ";
        cin >> num1;

        cout << "Round down of " << num1 << " is " 
             << floor (num1);
        break;

        //if the user input wrong value
        default : 
        cout << "\nERROR! Please input a, b, c, or d";
    }

    //Ask if the user still want to continue calculating
    cout << "\n\nTest another one? (y/n)";
    cin >> l;

    } while (l == 'y' || l == 'Y');

    //if no, display "goodbye!"
    if (l == 'n' || l == 'N'){
    cout << "Bye-bye!";
    }

    return 0;
}