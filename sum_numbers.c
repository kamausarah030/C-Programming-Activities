#include <stdio.h>

// The main function - where the program starts running
int main() {

    // Declare an integer variable to store the user's input
    int n;

    // Declare an integer variable to store the running total
    int sum = 0;

    // Ask the user to enter a number
    printf("Enter a positive number (N): ");

    // Read the user's input
    scanf("%d", &n);

    // Check whether the number is positive
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    // Loop from 1 up to N
    for (int i = 1; i <= n; i++) {

        // Add the current value of i to the total
        sum += i;

    }

    // Display the final result
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    // End the program successfully
    return 0;
}
