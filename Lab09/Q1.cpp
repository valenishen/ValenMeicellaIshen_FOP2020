#include <iostream>
using namespace std;

//Sum function with double x and y parameter
double sumNum (double x, double y){
    double result = x + y;
    return result;
}

//Subtract Function with double x and y parameter
double subtractNum (double x, double y){
    double result = x - y;
    return result;
}

//Multiplication Function with double x and y parameter
double multiNum (double x, double y){
    double result = x * y;
    return result;
}

//Division Function with double x and y parameter
double divisionNum (double x, double y){
    double result = x / y;
    return result;
}

//Main function
int main ()
{
    //Variable Declaration
    double num1, num2;

    //Input Request
    cout << "Hey! welcome to Simple Calculator!\n" 
         << "Enter 2 numbers and i will tell you the sum, subtract, multiplication and division\n"
         << "What is the first number? = ";
    cin >> num1;
    cout << "What is the second number? = ";
    cin >> num2;

    //Display result with invoke sum, subtract, multiplication, division function
    //The argument is num1 and num2 which was assigned from the user's input
    cout << num1 << " + " << num2 << " = " << sumNum (num1,num2) << "\n"
         << num1 << " - " << num2 << " = " << subtractNum (num1,num2) << "\n"
         << num1 << " x " << num2 << " = " << multiNum (num1,num2) << "\n"
         << num1 << " / " << num2 << " = " << divisionNum (num1,num2);
    
    return 0;
} 