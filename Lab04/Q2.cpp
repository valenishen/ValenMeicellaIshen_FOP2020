#include <iostream>
using namespace std;

int main ()
{
    //Variable Declaration
    int month, year;

    //Display Request Input
    cout << "Let's see how many days in a Month based on the Year!\n"
         << "What Year do you want? (ex: 2002, 2005, etc)" << endl;
    cin >> year;
    cout << "What Month do you want? (ex: 1 for Januari, 2 for Februari, etc)" << endl;
    cin >> month;

    //Give Conditions with Switch Case
    switch (month){
        case 1:
            cout << "In Januari " << year << " there are 31 days!";
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                cout << "In Februari " << year << " there are 29 days! Because it's a Leap Year";
            } else {
                cout << "In Februari " << year << " there are 28 days!";
            }
            break;
        case 3:
            cout << "In March " << year << " there are 31 days!";
            break;
        case 4:
            cout << "In April " << year << " there are 30 days!";
            break;
        case 5:
            cout << "In May " << year << " there are 31 days!";
            break;
        case 6:
            cout << "In June " << year << " there are 30 days!";
            break;
        case 7:
            cout << "In July " << year << " there are 31 days!";
            break;
        case 8:
            cout << "In August " << year << " there are 31 days!";
            break;
        case 9:
            cout << "In September " << year << " there are 30 days!";
            break;
        case 10:
            cout << "In October " << year << " there are 31 days!";
            break;
        case 11:
            cout << "In November " << year << " there are 30 days!";
            break;
        case 12:
            cout << "In December " << year << " there are 31 days!";
            break;
        default:
            cout << "The range is from 1 to 12, please input the correct one";
    }

    return 0;
}