#include <iostream>
using namespace std;

int main() {
    //Variable Declaration
    int i, j, k;

    //Display Request Input
    cout << "Let's make angle triangle using an asterisk\n"
         << "What number do you want ? = ";
    cin >> k;

    //Make looping condition
    for (i = 1; i <= k; i++){
        for (j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}