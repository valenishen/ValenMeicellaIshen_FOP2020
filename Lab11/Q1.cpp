#include <iostream>
#include <fstream>
using namespace std;

//Function to find the lowest number
int lowestNumber (int number[], int& lowest){
  
  lowest = number[0]; //base

  for (int i = 0; i < 100; i++){
    if (number[i] < lowest){
      lowest = number[i];
    }  
  }
  return lowest;
}

//Function to find the highest number
int highestNumber (int number[], int& highest){

  highest = number[0]; //base

  for (int i = 0; i < 100; i++){
    if (number[i] > highest){
      highest = number[i];
    }  
  }
  return highest;
}

//Average function
double averageNumber (int number[], int size, double& average){

  int total = 0;
  for (int i = 0; i < size; i++){
    total += number[i];
  }

  average = (double) total / size;
  return average;
}

int main(){
  //Variable declaration
  int number[100];
  int highest, lowest; //highest or lowest number variable
  double average;

  //read file
  //Display the file
  ifstream file ("lab11_randnum.txt");
  for (int i = 0; i < 100; i++){
    file >> number[i]; //assign to array
    cout << number[i] << "  ";
  }
  file.close();

  //read file again
  ifstream input("lab11_randnum.txt");
  if (input.is_open()) //mengecek apakah file terbuka atau tidak
  {
    for (int i = 0; i < 100; i++){
      input >> number[i];
      cout << number[i] << endl;
    }

    lowestNumber(number, lowest);
    highestNumber(number, highest);
    averageNumber(number, 100, average);

    cout << "\nThe lowest number is " << lowest << endl;
    cout << "The highest number is " << highest << endl;
    cout << "The average is " << average << endl;  
  }
  
  input.close();
  return 0;
}