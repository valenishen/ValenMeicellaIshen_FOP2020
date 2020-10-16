#include <iostream>
using namespace std;

int main() {
    
    int i;
    while (i < 100){
        if (i % 5 == 0){
            i += 3;
            continue;
        }
        cout << i << endl;
        i += 3;
    }

    /*int i = 99 ;
    while(i>= 0) {
        if (i % 5 == 0){
        i -= 3;
        continue;
        }
        cout << i << endl;
        i -= 3;
    }*/

    return 0;
}