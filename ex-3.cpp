#include <iostream>
#include <string>

using namespace std;

// declaration
void print(string &buf);

int main() {
    // notify user inputs
    cout << "Enter words separated by hyphens: " << endl;
    
    // get inputs from standard
    // input as line string
    string words {};
    getline(cin, words);

    // temporal buffer to store characters
    string buf {};

    for (int i = 0; i < words.length(); i++) {
        // alias the current character as 'c'
        char &c = words[i];
        
        // store character that 
        // is not '-' in buf
        if (c != '-') {
            buf.push_back(c);
        } 

        // print and clear characters in buf
        // if current is '-'
        else {
            print(buf);
        }

        // print and clear characters in buf
        // if current is 'nullptr'
        if (i == words.length() - 1) {
            print(buf);
        }
    }

    return 0;
}

// print displays length with respective words
void print(string &buf) {
    cout << "[" << buf.length() << "]" << " " << buf << endl;
    buf.clear();
}
