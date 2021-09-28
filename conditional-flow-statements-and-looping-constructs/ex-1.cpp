#include <iostream>

int main() {
    // Rewrite the for-loop as equivalent while statement

    /* for (i = 0; i < max_length; ++1) { */
    /*     if (input_line[i] == '?') ++count; */
    /* } */


    // Answer

    int i{};

    while (i < max_length) {
        if (input_line[i] == '?') ++count;
        ++i;
    } 

    return 0;
}


