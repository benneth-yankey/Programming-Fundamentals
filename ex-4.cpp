#include <iostream>
#include <string>

using namespace std;

// array size as a macro
#define Array_Size (10)

// declare a new type definition for array of strings
typedef string string_t[Array_Size];

// declarations
void printLargestSize(string_t words);

int main() {
    // declare an array using the type 'arr_str'
    string_t words;

    // Read a maximum of 10 text from standard input
    std::cout << "Enter a random text: " << endl;

    // get inputs from standard input
    string temp {};
    for (int i = 0; i < Array_Size; i++) {
        cin >> words[i];
    } 

    // execute to print the largest string
    printLargestSize(words);

    return 0;
}

// prints the largest string
void printLargestSize(string_t words) {
    // declares temporal string buffer and length
    string buf {};
    int len {};

    // compute the largest string
    for (int i = 0; i < Array_Size; i++) {
        if (words[i].length() > len) {
            len = words[i].length();
            buf = words[i];
        }
    }

    // prints the largest string message
    cout << "The largest string is: " << buf << endl;
}

