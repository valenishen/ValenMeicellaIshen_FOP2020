#include <iostream>
using namespace std;

//Greeting function with string name as the parameter
void greeting (string name){

    //Display the greeting
    cout << "Hello " << name << ", have a great day!";
}

//Main Function
int main(){

    //Variable declaration
    string x;

    //Display request to input name
    cout << "What's your name? = ";
    getline (cin, x, '\n');

    //Invoke greeting function
    greeting(x);

    return 0;
}