#include <iostream>
using namespace std;

int main() {

  //Variable declaration
  const int array_size = 7;
  int my_arr[array_size] = {1, 4, 7, 2, 6, 3, 5}; //Desired array from question

  //---LINEAR SEARCH---//

  //Sort from high to low number
  cout << "-----DESCENDING -----" << endl;
  for (int i = 0; i < array_size - 1; i++){
    int temp = 0; 
    for (int j = i + 1; j < array_size; j++){
      if (my_arr[i] < my_arr[j]){ //swap number if n is smaller than n+1
      temp = my_arr[i];
      my_arr[i] = my_arr[j];
      my_arr[j] = temp; 
    }
    }
  }
  
  //Display descending result
  for (int i = 0; i < array_size; i++){
    cout << "array" << "["<<i<<"]" << " = " << my_arr[i] << endl;
  }
  
  cout << endl << endl;

  //Sort from low to high number
  cout << "-----ASCENDING -----" << endl;
  for (int i = 0; i < array_size - 1; i++){
    int temp = 0;
    for (int j = i + 1; j < array_size; j++){
      if (my_arr[i] > my_arr[j]){ //swap number if n is bigger than n+1
      temp = my_arr[i];
      my_arr[i] = my_arr[j];
      my_arr[j] = temp; 
    }
    }
  }
  
  //Display ascending result
  for (int i = 0; i < array_size; i++){
    cout << "array" << "["<<i<<"]" << " = " << my_arr[i] << endl;
  }

  return 0;
}