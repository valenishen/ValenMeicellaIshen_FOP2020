#include <iostream>
using namespace std;

//Function prototype
void yearMonthDay (int number);

//Main function
int main (){

    //Variable declaration
    int number;

    //Display request to input
    cout << "Enter total of days = ";
    cin >> number;

    //Display result, invoke yearMonthDay function
    yearMonthDay(number);

    return 0;
}

//Function to calculate the year, month dan day
void yearMonthDay (int number){
    int year = number / 365;
    cout << "Year = " << year << endl;

    int month = number % 365;
    cout << "Month = " << month / 30 << endl;

    cout << "Day = " << month % 30;
}

/* use reference
void yearCount (int, int&, int&, int&);

int main ()
{
    int num, num1, num2, num3;

    cout << "number = ";
    cin >> num;

    yearCount (num, num1, num2, num3);
    cout << "year = " << num1 << endl;
    cout << "month = " << num2 << endl;
    cout << "days = " << num3 << endl;

    return 0;
}

void yearCount (int total, int& year, int& month, int& day){
    year = total / 365;
    total %= 365;
    month = total / 30;
    total %= 30;
    day = total;
} */