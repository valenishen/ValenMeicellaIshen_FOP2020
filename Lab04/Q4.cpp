#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Variable Declaration
    float weight, height, BMI;

    //Display Request Input
    cout << "BMI CALCULATOR\n" << "Please input your weight in kg = ";
    cin >> weight;
    cout << "\nPlease input your height in m = ";
    cin >> height;

    //Operate the Input
    BMI = weight / pow (height, 2);

    //Give conditions
    if (BMI > 0 && BMI < 18.5){
        cout << "Oh no, you are UNDERWEIGHT! Eat more now!" << endl;
    }
    else if (BMI >= 18.5 && BMI <= 24.9){
        cout << "Yeay, you are NORMAL!" << endl;
    }
    else if (BMI >= 25 && BMI <= 29.9){
        cout << "Oh no, you are OVERWEIGHT! Please do more exercise!" << endl;
    }
    else if (BMI >= 30){
        cout << "Oh no, you are OBESITY! Please eat healthier!" << endl;
    }
    else {
        cout << "I think there's something wrong with the input, please re-input";
    }

    return 0;
}