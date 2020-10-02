#include <iostream>
using namespace std;

int main()
{
    //Variable Declaration
    int score1, score2, score3, totalScore;
    double average;

    //Display Request Input
    cout << "AVERAGE SCORE CALCULATOR \n" << "Input 3 Score\n"
         << "First Score = ";
    cin >> score1;
    cout << "Second Score = ";
    cin >> score2;
    cout << "Third Score = ";
    cin >> score3;

    //Operate the Score
    totalScore = score1 + score2 + score3;
    average = totalScore / 3;

    //Give Condition
    if (average >= 80){
        cout << "Your average score is " << average << ", so you got an A!" << endl;
    }
    else if (average >= 75 && average < 80){
        cout << "Your average score is " << average << ", so you got an AB" << endl;
    }
    else if (average >= 70 && average < 75){
        cout << "Your average score is " << average << ", so you got a B!" << endl;
    }
    else if (average >= 65 && average < 70){
        cout << "Your average score is " << average << ", so you got a BC!" << endl;
    }
    else if (average >= 60 && average < 65){
        cout << "Your average score is " << average << ", so you got a C!" << endl;
    }
    else if (average >= 40 && average < 60){
        cout << "Your average score is " << average << ", so you got a D!" << endl;
    }
    else if (average < 40){
        cout << "Your average score is " << average << ", so you got an E!" << endl;
    }
    else {
        cout << "There's no way the average is negative!" << endl;
    }

    return 0;
}