#include <iostream>
#include <fstream>
using namespace std;

//function prototype
int binarySearch(int lot[], int size, int key, int index);

int main(){

  //Variable declaration
  int key; //user input
  const int size = 7; //from txt
  int lot[size]; //array of lottery number
  int index; //key's index

  //Display request to input lottery number
  cout << "--LOTTERY CHECKER--\n"
       << "Let's test your luck! Are you a winner?\n"
       << "Input your lottery number\n"
       << "Number = ";
  cin >> key;

  //The number should contain 4 digit, else -> error
  if (key >= 1000 && key < 10000){

    //Validate the number if in range
    cout << "Number validated" << endl << endl;

    cout << "Checking ..." << endl << endl;

    //Read file
    ifstream input;
    input.open("lottery_winner.txt");

    //Assign input file to array
    for (int i = 0; i < size; i++){
      input >> lot[i];
    }

    //Because using the binary search, array must be sorted
    //Ascending method
    int temp = 0;
    for (int i = 0; i < size - 1; i++){
      for (int j = i + 1; j < size; j++){
        if (lot[i] > lot[j]){
          temp = lot[i];
          lot[i] = lot[j];
          lot[j] = temp;
        }
      }
    }
    
    //Assign binarySearch result to index
    index = binarySearch(lot, size, key, index);
    
    //If key is in the list, display winner
    for (int i = 0; i < size; i++){
      if (key == lot[index]){
        cout << "You are a WINNER!\n"
             << "Your number [" << key << "] is in the list at index " << index << endl;
        cout << "Call us on xxx to take your $$$ MONEY $$$";
        break;
      } 
      
      else { //if no, display lose
        cout << "Sorry, It's not your lucky day\n"
             << "Maybe next time? Buy another ticket and i will give you 5% discount! How 'bout that?\n";
             break;
      }
    }

  } else { //display if the number is not in range
    cout << "Error, please input the correct number" << endl;
  }

  return 0;
}

int binarySearch (int lot[], int size, int key, int index){

  int low = 0;
  int high = size - 1;

  while (high >= low){
    int mid = (high + low) / 2;

    if (key < lot[mid]){
      high = mid - 1; //ignore > mid
    } else if (key == lot[mid]){
      return mid;
    } else {
      low = mid + 1; //ignore < mid
    }
  }
  
  return -low - 1;
}