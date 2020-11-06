#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Variable
    string myname;
    string fullname;
    string myage = "My age is 18 years old.";

    // Read File
    ifstream input; // Variable untuk Read File
    input.open("myname.txt");

    getline(input, myname, '\n');
    cout << "My name is " << myname;
    fullname = myname;

    input.close();

    // Write File
    ofstream output; // Variable untuk Write File
    output.open("myname.txt");

    output << fullname << endl << myage;
    output.close();

    cout << "\nDONE";

    // //Variable Declaration
    // ifstream input;
    // ofstream output;
    // string myname;

    // //Read File
    // input.open ("myname.txt");
    // while (getline(input, myname, '\n')){
    //     input >> myname; 
    // }
    // cout << "My name is " << myname << "\n";
    // input.close();
    
    // //Write File
    // output.open("myname.txt");
    // output << myname << endl << "My age is 18 yo";
    // output.close();

    // cout << "Done";
    
    return 0;
}