#include <iostream>
#include <stream>

using namespace std;

int main() {
    // declare character varaible
    string c{};

    // gets input from standard input, reverse and print
    // to standard out
    while (cin.get(c)) {
        c.reverse();
        cout.put(c);
    }

    return 0;
}
