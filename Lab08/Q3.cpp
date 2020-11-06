#include <iostream>
using namespace std;

int main(){

    /*NOMOR 1
    Find the length of the string
    a. Hello World!
    b. Prasetiya Mulya
    c. SE2020 is the best!
    use x.size() or x.length()
    */

    //Variable Declaration
    string x = "Hello World!", y = "Prasetiya Mulya", z = "SE2020 is the best!";

    //use the length / size function and display the result
    cout << "The answer for Exercise 3 No.1\n" << "The length of the sentence below\n" << "a. Hello World! = " << x.size() 
         << "\nb. Prasetiya Mulya = " << y.size() << "\nc. SE2020 is the best! = " << z.size() << endl;


    /*NOMOR 2
    Combine the string
    a. "My name is " and "John Trump"
    b. "Have a " and "good day!"
    */

    //Variable Declaration
    string a = "My name is ", b = "John Trump", c = "Have a ", d = "good day!";

    //Display the result
    cout << "\nThe answer for Exercise 3 No.2\n" << "a. My name is and John Trump\n   " << a + b
         << "\nb. Have a and good day!\n   " << c + d << endl;

    return 0;
}