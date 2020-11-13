#include <iostream>
using namespace std;

//loopName function with string name and x (number of looping) parameter
void loopName (string name, int x){
    
    //Variable declaration for k (condition to satisfy the loop)
    int k = 1;

    //Start looping with while loop, the number of looping based on user's input
    while (k <= x){
        cout << name << endl;
        k++;
    }
}

//Main Function
int main (){

    //Variable Declaration
    string userName;
    int numberLoop;

    //Display request to input name and the number of loop
    cout << "Hello, let's print your name as many as you want!\n"
         << "What's your name?\n";
    getline(cin, userName, '\n');

    cout << "How many times do you want to print your name?\n";
    cin >> numberLoop;
    cout << endl;
    
    //Invoke loopName function
    loopName(userName, numberLoop);

    return 0;
}