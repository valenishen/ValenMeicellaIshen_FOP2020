#include <iostream>
using namespace std;

//Odd/Even Checker Function with int x and y parameter
void oddEvenNumber (int x, int y){
    //Check if x is odd or even
    if (x % 2){
        cout << x << " is an Odd Number\n";
    } else {
        cout << x << " is an Even Number\n";
    }

    //Check if y is odd or even
    if (y % 2){
        cout << y << " is an Odd Number\n";
    } else {
        cout << y << " is an Even Number\n";
    }
}

//Swap Value Function with int x and y parameter
void swap (int x, int y){

    //Display value before swapping
    cout << "Before swapping\n"
         << "x = " << x << endl;
    cout << "y = " << y << endl;

    //Swap x value to y, vice versa
    x = x + y;
    y = x - y;
    x = x - y;

    //Display value after swapping
    cout << "After Swapping\n" 
         << "x = " << x << endl;
    cout << "y = " << y << endl;

    //Check odd or even after the swap, invoke oddEvenNumber
    cout << endl;
    oddEvenNumber(x,y);
    
    /* We can use *x or *y to change the original value of argument, if so, everything below the code swap
    the value will be changed, but we have to address the value in the argument (&x, &y)
    
    int swap (int *x, int *y){
        int temp = *x;
        *x = *y;
        *y = temp;
        cout << *x << *y;
    }

    int main (){
        swap (&x,&y);
    }
    */

}

//Main Function
int main ()
{   
    //Variable Declaration
    int num1, num2;

    //Display request to Input
    cout << "What is the first number = ";
    cin >> num1;
    cout << "What is the second number = ";
    cin >> num2;

    //Check odd or even before swapping, invoke oddEvenNumber
    cout << endl;
    oddEvenNumber(num1,num2);

    //Swap the number, invoke swap function
    cout << "\nIf we swap the value :\n";
    swap (num1, num2);

    return 0;
}