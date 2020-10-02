#include <iostream>
using namespace std;

int main()
{
    //Declare age variable to int
    int age;

    //Request to input number of age and assign it to age variable
    cout << "Let's check what stages you are now based on your AGE! \n"
         << "How old are you?" << endl;
    cin >> age;

    //Give Conditions to the age, if the age between 0 - 11 cout Child, 12 - 18 cout Teenager
    //>18 cout Adult
    if (age > 0 && age < 12){
        cout << "You are a Child!";
    }
    else if (age >= 12 && age < 18){
        cout << "You are a Teenager!";
    }
    else if (age >= 18){
        cout << "You are an Adult!";
    }
    else {
        cout << "There's No Negative Age!";
    }

    return 0;
}