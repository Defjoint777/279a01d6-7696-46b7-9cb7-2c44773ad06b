#include <stdio.h>

int main(void) {
    // fprintf allows us to direct output to any FILE* stream.
    // stdout is the predefined stream for terminal output.
    fprintf(stdout, "Hello, World using fprintf to stdout!\n");

    return 0;
}
