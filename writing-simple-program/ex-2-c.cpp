#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // print info message
  cout << "Enter five numbers: " << endl;

  // declare array with 5 integer slots
  // and initialize to default of 0
  int numbers[5]{};

  // calculate the total length of 
  // elements in the array
  int len = sizeof(numbers)/sizeof(int);

  // store received inputs and store
  // in the array
  for (int i = 0; i < len; i++) {
    cin >> numbers[i];
  }  

  // sort the array in ascending order
  for (int i = 0; i < len; i++) {
    bool swapped = false;

    for (int j = 0; j < len - i - 1; j++) {
      if (numbers[j] > numbers[j+1]) {
        int temp = numbers[j];
        numbers[j] = numbers[j+1];
        numbers[j+1] = temp;
        swapped = true;
      }
    }

    // quit for loop if the array 
    // is already sorted
    if (!swapped) {
      break;
    }
  } 

  // get the median position 
  int pos = round((len-1) / 2);

  // get the median
  int median = numbers[pos];

  // print the mode value
  cout << "The median value is: " << median << endl;
  
  return 0;
}

