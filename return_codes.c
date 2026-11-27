#include <stdio.h>
#include <errno.h>
#include <string.h>

// Function that returns a status code (0 for success, 1 for failure)
int readFileWithReturnCode(const char *filename) {

FILE *file = fopen(filename, "r");

if (file == NULL) {

    // Print error message to standard error stream
    fprintf(stderr, "Error opening file: %s\n", strerror(errno));

    // Return 1 to signal failure
    return 1;
}

// ... read file ...

fclose(file);

return 0; // Return 0 for success

}

int main() {

printf("--- Testing Return Code Strategy ---\n");

// Check the return code (1 = failure)
if (readFileWithReturnCode("data.txt") == 1) {
    printf("Main function: Handled error gracefully. Program continues.\n");
}

printf("\n--- Evaluation ---\n");
printf("In C, we must manually check return codes.\n");
printf("If the programmer forgets to check, the program might crash later.\n");

return 0;

}