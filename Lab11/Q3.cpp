#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main (){
  const int array_size = 40;
  string studentName[array_size];
  int studentScore[array_size];

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

  int lowest = studentScore[0];
  int highest = studentScore[0];
  int sum = 0;
  string lowestName;
  string highestName;

  for (int i = 0; i < array_size; i++){
    if (studentScore[i] < lowest){
      lowest = studentScore[i];
      lowestName = studentName[i];
    }

    if (studentScore[i] > highest){
      highest = studentScore[i];
    }

  }

  cout << lowestName << " has the lowest grade with " << lowest << endl;
  for (int i = 0; i < array_size; i++){
    if (studentScore[i] == highest){
      highestName = studentName[i];
  cout << highestName << " - ";
    }
  }

  cout << " have the highest grade with " << highest << endl;

  for (int i = 0; i < array_size; i++){
    sum += studentScore[i];
  }

  double average = sum / array_size;
  cout << "The average of all score is " << average << endl;

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
}