#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main (){
  //Variable declaration
  const int array_size = 40;
  string studentName[array_size];
  int studentScore[array_size];

  //Read File
  ifstream input ("lab11_grade.txt");
  
  int i = 0;
  string line;

  while (getline(input, line)){
    int nameEndPos = line.find ('-') - 1;
    studentName[i] = line.substr(0, nameEndPos);

    int scoreStartPos = line.find ('-') + 1;
    int scoreEndPos = line.find ('\n');
    studentScore[i] = stoi(line.substr (scoreStartPos, scoreEndPos));

    ++i;
  }

  //Variable declaration
  int lowest = studentScore[0]; //base
  int highest = studentScore[0]; //base
  int sum = 0;
  string lowestName;
  string highestName;

  //find the lowest and highest score
  for (int i = 0; i < array_size; i++){
    if (studentScore[i] < lowest){
      lowest = studentScore[i];
      lowestName = studentName[i];
    }

    if (studentScore[i] > highest){
      highest = studentScore[i];
    }
  }

  //display the lowest
  cout << lowestName << " has the lowest grade with " << lowest << endl << endl;

  //because 2 person are the highest then display both
  for (int i = 0; i < array_size; i++){
    if (studentScore[i] == highest){
      highestName = studentName[i];
      cout << highestName << " - ";
    }
  }

  cout << " have the highest grade with " << highest << endl << endl;

  //calculate the sum for average
  for (int i = 0; i < array_size; i++){
    sum += studentScore[i];
  }

  //calculate the average and display the result
  double average = sum / array_size;
  cout << "The average of all score is " << average << endl << endl;

  //determine who passed and who didn't by the average
  cout << "Therefore\n"
       << "The student who passed: \n";
  for (int i = 0; i < array_size; i++){
    if (studentScore[i] > average){
      cout << " ~ " << studentName[i] << " - " << studentScore[i] << endl;
    }
    }

  cout << "\nThe student who didn't passed: \n";
  for (int i = 0; i < array_size; i++){
    if (studentScore[i] < average){
      cout  << " ~ " << studentName[i] << " - " << studentScore[i] << endl;
    }
  }
  input.close(); 

  return 0;
}