#include <iostream>
#include <fstream>
using namespace std;

int main(){

    //Variable Declaration
    ifstream input;
    ofstream output;
    string myname;

    //Read File
    input.open ("myname.txt");
    while (getline(input, myname, '\n')){
        input >> myname; 
        cout << "My name is " << myname << "\n";
    }
    input.close();
    
    //Write File
    output.open("myname.txt");
    output << myname << endl << "My age is 18 yo";
    output.close();

    cout << "Done";
    
    return 0;
}