#include <iostream>

using namespace std;

enum Colors {RED, YELLOW, AMBER=YELLOW, GREEN};

int main() {
  cout << "RED: " << Colors::RED << endl; 
  cout << "YELLOW: " << Colors::YELLOW << endl; 
  cout << "AMBER: " << Colors::AMBER << endl; 
  cout << "GREEN: " << Colors::GREEN << endl; 

  return 0;
}
