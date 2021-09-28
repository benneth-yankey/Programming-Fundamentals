#include <iostream>

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
  
  // declare mode, count and 
  // initialize to default of 0
  int mode{}, count{};

  // check for the most occuring
  // number in the array
  for (int i = 0; i < len; i++) {
    int seen{};

    for (int j = 1; j < len; j++) {
      if (numbers[i] == numbers[j]) {
        seen++;
      }
    }

    if (seen > count) {
      count = seen;
      mode = numbers[i];
    }
  }

  // print the mode value
  cout << "The mode value is: " << mode << endl;

  return 0;
}
