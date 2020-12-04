#include <iostream>
#include <fstream>
#include <cstdlib> //to find in string
using namespace std;

int main(){
  //Variable declaration
  const int array_size = 8;
  string data[array_size];
  string employeeName[array_size];

  double salaries[array_size];
  double lowest, highest, average, sum, above, under;
  string lowestName, highestName, aboveAverage, underAverage;

  int i = 0;
  string line;

  //Read file
  //Display the file
  ifstream file ("lab11_employee.txt");
  while (i < array_size){
    getline(file, line, '\n');
    data[i] = line;
    cout << data[i] << endl;
    ++i;
  }
  file.close();

  cout << endl; 

  //Read File
  ifstream input ("lab11_employee.txt");
  i = 0;
  while(getline(input, line)){
    //var.find akan mencari karakter yang diinginkan (dihitung urutan ke berapa)
    //var.substr akan membuat subset dari variable asli lalu ditentukan (awalan , (s.d) akhir)
    int nameEndPos = line.find('$') - 1;
    employeeName[i] = line.substr (0, nameEndPos);

    int salariesStartPos = line.find('$') + 1;
    int salariesEndPos = line.find('\n');
    salaries[i] = stod(line.substr (salariesStartPos, salariesEndPos));

    ++i;
  }

  lowest = salaries[0]; //base
  highest = salaries[0]; //base

  //find the lowest and the highest number
  for (int i = 0; i < array_size; i++){
    if (salaries[i] < lowest){
      lowest = salaries[i];
      lowestName = employeeName[i];
    }

    if (salaries[i] > highest){
      highest = salaries[i];
      highestName = employeeName[i];
    }
  }

  cout << endl;
  
  //display the result
  cout << "The person who has lowest salaries is " << lowestName << " with " << lowest << endl << endl;
  cout << "The person who has highest salaries is " << highestName << " with " << highest << endl << endl;

  for (int i = 0; i < array_size; i++){
    sum += salaries[i]; //for average
  }

  //calculate the average and display it
  average = sum / array_size;
  cout << "-----The average of all salaries is " << average << endl << endl;

  //determine the salaries above or under the average
  cout << "The person who has salaries above the average: " << endl;
  for(int i = 0; i < array_size; i++){
    if (salaries[i] > average){
      cout << employeeName[i] << " with " << salaries[i] << endl;
    }
  }
  
  cout << endl;
  
  cout << "The person who has salaries under the average: " << endl;
  for(int i = 0; i < array_size; i++){
    if (salaries[i] < average){
      cout << employeeName[i] << " with " << salaries[i] << endl;
    }
  }
  cout << endl << endl;
  return 0;
}