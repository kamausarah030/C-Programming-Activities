
#include <stdio.h>

// The main function
int main() {

    // Declare an integer variable and initialise it to 0
    int number = 0;

    // do-while loop executes the body before checking the condition
    do {

        // Display a prompt asking for a positive number
        printf("Enter a positive number: ");

        // Read the input from the user
        scanf("%d", &number);

        // Check if the input is invalid
        if (number <= 0) {
            printf("Invalid! ");
        }

    } while (number <= 0);

    // Display the valid number
    printf("You entered: %d\n", number);

    // End the program successfully
    return 0;
}
