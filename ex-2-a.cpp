#include <iostream>

using namespace std;

int main() {
  // print info message
  cout << "Enter five numbers: " << endl;

  // declare array with 5 integer slots
  // and initialize all to default of 0
  int numbers[5]{};

  // calculate the total length of 
  // elements in the array
  int len = sizeof(numbers)/sizeof(int);

  // store received inputs and store
  // in the array
  for (int i = 0; i < len; i++) {
    cin >> numbers[i];
  }
  
  // loop through array and add numbers
  // and store total as sum
  int sum{};
  for (int i = 0; i < len; i++) {
    sum += numbers[i];
  }

  // calculate mean value
  float mean = float(sum) / float(len);

  // print the mean value
  cout << "The mean value is: " << mean << endl;

  return 0;
}
