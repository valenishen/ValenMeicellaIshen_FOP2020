#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <iomanip> //set width
#include <bits/stdc++.h> //sort
using namespace std;

//function to remove same score
int remove_duplicate (int sortNumber[], int n)
{
  if (n == 0 || n == 1)
    return n;

  int temp[n]; 
  int j = 0;

  for (int i = 0; i < n - 1; i++)
    if (sortNumber[i] != sortNumber[i+1])
      temp[j++] = sortNumber[i];

    temp[j++] = sortNumber[n-1];

  for (int i=0; i < j; i++)
    sortNumber[i] = temp[i];

  return j;
}

int main (){
  //Variable declaration
  const int array_size = 40;
  string studentName[array_size];
  int studentScore[array_size];
  int similar; //index without same score

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

  //Assign score to new array
  int sortNumber[array_size];
  for (int i = 0 ; i < array_size; i++){
    sortNumber[i] = studentScore[i];
  }

  //descending score
  cout << "-------DESCENDING-------\n";
  //sort from the highest to lowest
  sort (sortNumber, sortNumber + array_size, greater<int>());

  //invoke index without same score
  similar = remove_duplicate(sortNumber, array_size);

  //display name and score
  cout << left << setw(20) << "Name" << setw(5) << "Score" << endl;

  for (int i = 0 ; i < similar; i++){
    for (int k = 0; k < array_size; k++){
        if (sortNumber[i] == studentScore[k]){
          cout << left << setw(20) << studentName[k] << setw(5) << sortNumber[i] << endl;
      }
    }
  }
 
  cout << endl << endl;

  //Ascending score
  cout << "-------ASCENDING-------\n";
  //sort from lowest to highest
  sort (sortNumber, sortNumber + array_size);
  
  //invoke index without same score
  similar = remove_duplicate(sortNumber, array_size);

  //Display name and the score
  cout << left << setw(20) << "Name" << setw(5) << "Score" << endl;

  for (int i = 0 ; i < similar; i++){
    for (int k = 0; k < array_size; k++){
        if (sortNumber[i] == studentScore[k]){
          cout << left << setw(20) << studentName[k] << setw(5) << sortNumber[i] << endl;
      }
    }
  }

  input.close(); 
  return 0;
}