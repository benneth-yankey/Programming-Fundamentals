#include <iostream>
#include <iomanip>

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
  cout << " Ans: A compile-time error: attempt to assign read-only d" << endl << endl;


  // decimal values for the following literals

  cout << "literals to decimal values: " << endl << endl;

  int i {0xf3f3};
  int j {0437};
  int k {'a'};

  cout << setw(6) << right << "0xf3f3" << "  " << setw(6) << left << i << endl;
  cout << setw(6) << right << "0437" << "  " << setw(6) << left << j << endl;
  cout << setw(6) << right << "'a'" << "  " << setw(6) << left << k << endl;

  return 0;
}

