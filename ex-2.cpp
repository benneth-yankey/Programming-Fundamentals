#include <iostream>

using namespace std;

int main() {

  // declare variables

  int a{};           // integer
  int* b = &a;       // pointer to integer
  int &c = a;        // reference to integer
  const int d{};     // constant integer


  // perform operations

  a = 5;             // assign 5 to integer
  *b = ++(*b);       // increment integer through pointer
  c = ++c;           // increment through reference

  cout << "The value of integer is: " << a << endl << endl;   // 7

  cout << "What happens if you attempt to change the value of the constant?: d = 1?: " << endl;
  cout << " Ans: A compile-time error: attempt to assign read-only d" << endl;

  return 0;
}

