#include <iostream>

using namespace std;

int main() {

    // declares char variable
    char c{};

    // gets inputs from standard input
    // and prints to standard output until end-of-input is deleted, ^D
    while (cin.get(c)) {
        cout.put(c);
    }

    return 0;
}
