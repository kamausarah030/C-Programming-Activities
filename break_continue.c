#include <stdio.h>

// The main function
int main() {

    // Display a header
    printf("Number filter: Skip multiples of 3, stop at 15\n");

    // Start a for loop from 1 to 20
    for (int i = 1; i <= 20; i++) {

        // Check if i is equal to 15
        if (i == 15) {

            // Display a message
            printf("Breaking at %d!\n", i);

            // Stop the loop
            break;
        }

        // Check if i is divisible by 3
        if (i % 3 == 0) {

            // Skip multiples of 3
            continue;
        }

        // Display numbers that are not multiples of 3
        printf("%d ", i);

    }

    // Move to a new line
    printf("\n");

    // End the program
    return 0;
}
