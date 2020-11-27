#include <iostream>

//Global variable for Question 1 - 3
int myList[] = {4, 7, 12, 5, 2}; //array declaration
const int size = sizeof(myList) / sizeof(myList[0]); //size of array

//using namespace std dihilangkan karena variable size menjadi ambiguous

//Function Display for Question 1
void displayMyList (int n, int myList[]){
  //Looping to display array
  int i = 0;
  while (i < size){
    if(i == n){
      std :: cout << "Array " << i+1 << ": " << myList[i] << std :: endl; 
    }
    i++;
  }
}

//Function Sum for Question 2
int sumArray (int& sum, int myList[]){
  sum = 0; //variable total value

  //Loop to calculate all value
  for (int i = 0; i < size; i++){
    sum += myList[i];
  }

  return sum;
}

//Function Average for Question 2
double averageArray (double& average, int myList[]){
  int n; //variable invoke sum value

  //calculate average
  average = sumArray(n, myList) / size; 

  return average;
}

//Function Odd / Even for Question 3
int oddEven(int tof[], int myList[]){
  //Looping to see even or odd and assign to each tof index
  for (int i = 0; i < size; i++){
    if (myList[i] % 2 == 0){
      tof[i] = 1;
    } else
      tof[i] = 0;;
  }
  return 0;
}


int main(){
  //Display default array
  std :: cout << "Default Array: ";
  for (int i = 0; i < size; i++){
    std :: cout << myList[i] << " ";
  }

  // Question 1
  //Display request to input
  std::cout << "\n\nQuestion 1\n" << "Display the first, last and the 4th element of the array\n";
  displayMyList(0, myList); //first array
  displayMyList(4, myList); //last array
  displayMyList(3, myList); //4th array
    
  //Question 2
  int sum; //sum reference variable
  double average; //average reference variable
  sumArray(sum, myList); //invoke sum function
  averageArray(average, myList); //invoke average function

  //Display sum and average result
  std :: cout << "\nQuestion 2\n" << "Sum and Average of the Array" << "\nSum: " << sum << "\nAverage: " << average << std :: endl;

  //Question 3
  std :: cout << "\nQuestion 3\n" << "Find whether each value of array is even or odd\n";
  
  int tof[size]; //tof[] reference variable
  oddEven(tof, myList); //invoke function

  //Loop to see whether tof[] is 1 or 0
  for (int i = 0; i < size; i++){
    if (tof[i] == 1){
      std :: cout << "Array " << i+1 << " is Even";
      std :: cout << "\n";
    } else{
      std :: cout << "Array " << i+1 << " is Odd";
      std :: cout << "\n";
    }
  }

  return 0;
}