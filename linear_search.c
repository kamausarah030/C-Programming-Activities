#include <stdio.h>

// Function to search for a target value in an array
int linearSearch(int arr[], int size, int target) {

    // Loop through each element in the array
    for (int i = 0; i < size; i++) {

        // Compare the current element with the target
        if (arr[i] == target) {

            // Return the index if the element is found
            return i;
        }
    }

    // Return -1 if the element is not found
    return -1;
}

// Main function
int main() {

    // Declare and initialise an array of 8 integers
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};

    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Variable to store the user's search value
    int target;

    // Display the array contents
    printf("Array contents: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Ask the user to enter a number
    printf("Enter a number to search: ");
    scanf("%d", &target);

    // Call the linearSearch function
    int position = linearSearch(numbers, size, target);

    // Check whether the element was found
    if (position != -1) {

        printf("Element found at index: %d\n", position);

    } else {

        printf("Element not found in the array.\n");
    }

    return 0;
}