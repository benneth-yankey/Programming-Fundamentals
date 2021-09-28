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
  ++(*b);       // increment integer through pointer
  ++c;           // increment through reference

  cout << "The value of integer is: " << a << endl << endl;   // 7

  cout << "What happens if you attempt to change the value of the constant?: d = 1?: " << endl;
  cout << " Ans: A compile-time error: attempt to assign read-only d" << endl << endl;


  // decimal values for the following literals

  cout << "literals to decimal values: " << endl << endl;

  cout << setw(6) << right << "0xf3f3" << "  " << setw(6) << left << int(0xf3f3) << endl;
  cout << setw(6) << right << "0437" << "  " << setw(6) << left << int(0437) << endl;
  cout << setw(6) << right << "'a'" << "  " << setw(6) << left << int('a') << endl;

  return 0;
}

