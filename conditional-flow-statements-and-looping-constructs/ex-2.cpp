#include <iostream>
#include <tuple>

using namespace std;

// declarations
tuple<int, int, char> getInputs();
void calculator(int, int, char);

int main() {
    int a, b; char c;
    tie(a, b, c) = getInputs();

    calculator(a, b, c); 
    return 0;
}

// gets inputs from standard
tuple<int, int, char> getInputs() {
    cout << "Please input two operands: ";
    int i{}, j{};
    cin >> i >> j;

    char op{};
    cout << "Please choose an operator ( *, +, -, / ): ";
    cin >> op;

    return {i, j, op};
}

// calculate prints the computation of two numbers
// either by '*', '+', '-' or '/'
void calculator(int opr, int opr2, char op) {
    switch(op) {
        case '*': {
            printf("Multiplying %d and %d = %d\n", opr, opr2, (opr * opr2));
            break;
        };
        case '+': {
            printf("Adding %d and %d = %d\n", opr, opr2, (opr + opr2));
            break;
        };
        case '-': {
            printf("Subtracting %d and %d = %d\n", opr, opr2, (opr - opr2));
            break;
        };
        case '/': {
            printf("Dividing %d and %d = %d\n", opr, opr2, (opr / opr2));
            break;
        };
        default: 
            cout << "You didn't provide valid inputs" << endl;
    }
}