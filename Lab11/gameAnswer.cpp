#include <iostream>
#include <cstdlib>

//Global variable for Question 1 - 3
int myList[] = {4, 7, 12, 5, 2}; //array declaration
const int size = sizeof(myList) / sizeof(myList[0]); //size of array

//using namespace std dihilangkan karena variable size menjadi ambiguous

//Function to display value
void displayMyList (int n, int myList[]){
  std :: cout << "Array " << n << ": " << myList[n-1] << std :: endl; 
}

//Function Sum
int sumArray (int& sum, int myList[]){
  sum = 0; //variable total value

  //Loop to calculate all value
  for (int i = 0; i < size; i++){
    sum += myList[i];
  }

  return sum;
}

//Function Average
double averageArray (double& average, int myList[]){
  int n; //variable invoke sum value

  //calculate average
  average = sumArray(n, myList) / size; 

  return average;
}

//Function Odd / Even
int oddEven(int& b, int myList[]){
  if (myList[b-1] % 2 == 0){
    b = 1;
  } else
    b = 0;
  return 0;
}

//Function to display default array
void def(int myList[]){
  std :: cout << "Default Array: ";

  for (int i = 0; i < size; i++){
    std :: cout << myList[i] << " ";
  }
}

int main(){
  char a, c; //variable for condition
  int b,d; //variable to keep value of reference

  do{
    def (myList); //display default array

    //display menu
    std :: cout << "\n\nMenu:\n" 
    << "   a. Display value of an index\n" 
    << "   b. Total of Array Value\n" 
    << "   c. Average of Array Value\n" 
    << "   d. Determine whether array of an index is an Even or Odd\n";
    std :: cin >> a;
    system("cls"); //for viscode, ("clear") for repl.it
    
    //see the condition
    do {
      switch (a){
        case 'a':
          def(myList); //display default array

          std :: cout << "\n\nDisplay Value\n"
          << "What element do you want to display? ";
          std :: cin >> b;

          displayMyList(b, myList); //invoke display function
          break;

        case 'b':
          def (myList); //display default array

          int sum; //sum reference variable
          sumArray(sum, myList); //invoke sum function

          //Display sum result
          std :: cout << "\n\nTotal of the Array: " << sum << std :: endl;
          break;

        case 'c':
          def(myList); //display default array

          double average; //average reference variable
          averageArray(average, myList); //invoke average function

          //Display average result
          std :: cout << "\n\nAverage of the Array: " << average << std :: endl;
          break;
          
        case 'd':
          def(myList); //display default array

          std :: cout << "\n\nDetermine whether array of an index is an Even or Odd\n" << "What value do you want to check? ";
          std :: cin >> d;

          b = d; //to keep d value because we want to display the input value

          oddEven(b, myList); //invoke odd / even function

          //display result
            if (b == true){
              std :: cout << "\nArray " << d << " is Even";
              std :: cout << "\n";
            } else{
              std :: cout << "\nArray " << d << " is Odd";
              std :: cout << "\n";
            }
          break;

        default:
        std :: cout << "Nope, no option";
      }

      std :: cout << "\n y for repeat\n n for back to menu\n";
      std :: cin >> c;
      system ("cls"); //for viscode, ("clear") for repl.it

    } while (c == 'y'); //back to switch case
  } while (c == 'n'); //back to menu

  return 0;
}