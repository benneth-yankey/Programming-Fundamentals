#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    // get input from standard input
    cout << "Enter a word: ";

    // declare a string to store input
    string word{};
    cin >> word;

    // declares a pointer array to stringj
    char* char_w = new char[word.length() + 1];

    // copy 'word' to 'char_w'
    strcpy(char_w, word.c_str());

    // iterate to display each character
    for (int i = 0; i < word.length() + 1; i++) {
        if (char_w[i] != 0) {
            cout << char_w[i] << endl;
        }
    }

    // clear off dynamic pointer after execution
    delete[] char_w;

    return 0;
}
