#include <stdio.h>

int main(void) {
    // Step 1: Open the file for writing
    FILE *file = fopen("output.txt", "w");  // "w" = write mode
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }

    // Step 2: Use fprintf to write to the file
    fprintf(file, "This was written to a file using fprintf!\n");

    // Step 3: Always close the file
    fclose(file);

    return 0;
}
