#include <stdio.h>

// The main function
int main() {

    // Declare an integer variable to store the user's input
    int number;

    // Display a prompt asking for a positive number
    printf("Enter a positive number: ");

    // Read the first input from the user
    scanf("%d", &number);

    // While loop checks the condition before executing
    while (number <= 0) {

        // Display an error message
        printf("Invalid! Please enter a positive number: ");

        // Read a new input from the user
        scanf("%d", &number);

    }

    // Display the valid number
    printf("You entered: %d\n", number);

    // End the program successfully
    return 0;
}
