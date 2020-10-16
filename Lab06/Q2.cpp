#include <iostream>
using namespace std;
int main() {

    //Variable Declaration
    int i, j, k;

    //Display Request Input
    cout << "Multiplication Table\n"
         << "What number = ";
    cin >> k;

    //Make looping condition based on the input
    for (i = 1; i <= k; i++){
        for (j = 1; j <= k ; j++){
            cout << i*j << " ";
        }
        cout << endl;
    }
    return 0;
}