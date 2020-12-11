#include <iostream>
using namespace std;

//function prototype for linear and binary search
int linearSearch (int arr[], int key, int size, int index);
int binarySearch (int arr[], int key, int size, int index);

int main(){

  //Variable declaration
  const int size = 7;
  int arr[] = {1, 4, 7, 2, 6, 3, 5}; //Desired array from question
  int key, index; //key = user input //index = index for key

  //Display the default array
  cout << "Array = ";
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }

  //Display request to input desired number
  cout << endl << "What number = ";
  cin >> key; //assign to key

  //Invoke linear function
  cout << "\n----Linear Search----" << endl;
  cout << "Number " << key << " is in index " << linearSearch(arr, key, size, index);

  cout << endl << endl;

  //For binary search, array must be sorted first
  //sort with ascending method
  int temp = 0;
  for (int i = 0; i < size - 1; i++){
    for (int j = i + 1; j < size; j++){
      if (arr[i] > arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  //Display sorted array
  cout << "Sorted Array = ";
  for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }

  //Invoke binary function
  cout << "\n\n----Binary Search----" << endl;
  cout << "Number " << key << " is in index " << binarySearch(arr, key, size, index);;
}

int linearSearch (int arr[], int key, int size, int index){
  for (int i = 0; i < size; i++){
    if (key == arr[i]){ //check the number one by one
      index = i; //assign to index
    }
  }
  return index;
}

int binarySearch (int arr[], int key, int size, int index){
  
  int low = 0;
  int high = size - 1;

  while (high >= low){
    int mid = (low + high) / 2; 

    if (key < arr[mid]){
      high = mid - 1; //Ignore > mid
    } else if (key == arr[mid]){
      return mid;
    } else {
      low = mid + 1; //Ignore < mid
    }
  }
  return -low - 1;
}
