int main() {
    // Rewrite the for-loop as equivalent while statement

    /* for (i = 0; i < max_length; ++1) { */
    /*     if (input_line[i] == '?') ++count; */
    /* } */


    // Answer

    while (max_length-- > 0) {
        if (input_line[i] == '?') ++count;
    } 

    return 0;
}
