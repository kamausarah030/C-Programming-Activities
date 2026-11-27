#include <stdio.h>

// FUNCTION: swapByValue
// Purpose: Attempts to swap two integers
// Parameters: a and b (passed by value)

void swapByValue(int a, int b) {

    // Display values before swapping
    printf("Inside function - Before swap: a = %d, b = %d\n", a, b);

    // Declare a temporary variable
    int temp = a;

    // Swap the values
    a = b;
    b = temp;

    // Display values after swapping
    printf("Inside function - After swap: a = %d, b = %d\n", a, b);
}

// MAIN FUNCTION
int main() {

    // Declare two integer variables
    int x = 10;
    int y = 20;

    // Display values before calling the function
    printf("Before calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call the function
    swapByValue(x, y);

    // Display values after calling the function
    printf("After calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    // Explain pass-by-value
    printf("\nExplanation: The function received COPIES of x and y.\n");
    printf("Changes made inside the function do not affect the originals.\n");

    return 0;
}
