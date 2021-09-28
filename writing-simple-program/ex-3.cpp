#include <iostream>

using namespace std;

// declarations
int getNumber();
bool isEven(int);
void printMultiplicationTable(int);
void printNonDivisibleNumbers(int);

int main() {
  // store entered number
  int num = getNumber();

  if (isEven(num)) {
    printMultiplicationTable(num);
  } else {
    printNonDivisibleNumbers(num);
  }

  return 0;
}

// returns entered number
int getNumber() {
  cout << "Enter a number: ";
  int num;
  cin >> num;
  return num;
}

// checks if entered is an even number
bool isEven(int num) {
  return num % 2 == 0;
}

// prints first 20 multiplication table
// for entered number
void printMultiplicationTable(int num) {
  const int row = 20;
  for (int i = 1; i <= row; i++) {
    /* cout << num << " x " << i << " = " << (num * i) << endl; */
    printf("%d x %d = %d\n", num, i, (num * i));
  }
}

// prints 30 integers not divisible
// entered number
void printNonDivisibleNumbers(int num) {
  const int max = 30;
  for (int i = 1; i <= max; i++) {
    if (i % num != 0) {
      cout << i << endl;
    }
  }
}

