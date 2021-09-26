#include <iostream>

using namespace std;

int main() {
  cout << "Enter five numbers: " << endl;

  int numbers[5]{};
  int len = sizeof(numbers)/sizeof(int);

  for (int i = 0; i < len; i++) {
    cin >> numbers[i];
  }
  
  int sum{};
  for (int i = 0; i < len; i++) {
    sum += numbers[i];
  }

  cout << "The mean value is: " << sum / len << endl;

  return 0;
}
