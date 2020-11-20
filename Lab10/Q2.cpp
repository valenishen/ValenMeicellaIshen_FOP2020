#include <iostream>
using namespace std;

//Function prototype
double toFarenheit (double celcius);
double toCelcius (double farenheit);

//Main function
int main(){

    //Variable declaration
    char a;
    int value;

    //Display request to chose condition
    cout << "Choose!\n"
         << "a. Celcius to Farenheit\n"
         << "b. Farenheit to Celcius\n"
         << "What do you want? = ";
    cin >> a;

    //Use switch case according to the input
    switch(a){

        //Celcius to Farenheit
        case 'a':
        cout << "Celcius = ";
        cin >> value;
        cout << "Farenheit of " << value << " celcius is " << toFarenheit(value);
        break;

        //Farenheit to Celcius
        case 'b':
        cout << "Farenheit = ";
        cin >> value;
        cout << "Celcius of " << value << " farenheit is " << toCelcius(value);
        break;
    }

    return 0;
}

//Convert celcius to farenheit function
double toFarenheit (double celcius){
    return (celcius * 9 / 5) + 32;
}

//Convert farenheit to celcius function
double toCelcius (double farenheit){
    return (farenheit - 32) * 5 / 9;
}