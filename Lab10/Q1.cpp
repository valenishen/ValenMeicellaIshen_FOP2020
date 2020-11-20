#include <iostream>
using namespace std;

//Max function for 2 Integer numbers
int max (int x, int y){

    //See what number is the maximum value with if else
    if (x > y){
        return x;
    } else {
        return y;
    }
}

//Min function for 2 Integer numbers
int min (int x, int y){

    //See what number is the minimum value with if else
    if (x < y){
        return x;
    } else {
        return y;
    }
}

//Max function for 2 Double numbers
double max (double x, double y){

    //See what number is the maximum value with if else
    if (x > y){
        return x;
    } else {
        return y;
    }
}

//Min function for 2 double numbers
double min (double x, double y){

    //See what number is the minimum value with if else
    if (x < y){
        return x;
    } else {
        return y;
    }
}

// Max function for 3 double numbers
double max (double x, double y, double z){

    //See what number is the maximum value with if else
    if (x > y && x > z){
        return x;
    } else if (y > x && y > z){
        return y;
    } else{
        return z;
    }
}

//Min function for 3 double numbers
double min (double x, double y, double z){

    //See what number is the maximum value with if else
    if (x <= y && x <= z){
        return x;
    } else if (y <= x && y <= z){
        return y;
    } else{
        return z;
    }
}

// main function
int main()
{
    //Variable declaration
    double num1, num2, num3;

    //Display request input
    cout << "What is the Max or Min Value?\n" << "What is the numbers?\n"
         << "First Number = ";
    cin >> num1;
    cout << "Second Number = ";
    cin >> num2;

    //Display result max and min value for 2 numbers
    cout << "The maximum value is = " << max(num1,num2);
    cout << "\nThe minimum value is = " << min(num1,num2);

    //Display to input the third number
    cout << "\nLet's try for 3 numbers\n"
         << "Third Number = ";
    cin >> num3;

    //Display result max and min value for 3 numbers
    cout << "The maximum value is = " << max(num1,num2, num3);
    cout << "\nThe minimum value is = " << min(num1,num2, num3);

    return 0;
}