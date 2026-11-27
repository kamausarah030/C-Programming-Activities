#include <stdio.h>

// GLOBAL VARIABLE
// Accessible by all functions in this file
int globalCounter = 100;

// FUNCTION: displayGlobal
// Displays the global variable
void displayGlobal() {

    printf("Inside displayGlobal: globalCounter = %d\n", globalCounter);
}

// FUNCTION: modifyGlobal
// Modifies the global variable
void modifyGlobal() {

    globalCounter = 500;

    printf("Inside modifyGlobal: globalCounter changed to %d\n", globalCounter);
}

// FUNCTION: localDemo
// Demonstrates a local variable
void localDemo() {

    // Local variable shadows the global variable
    int globalCounter = 999;

    printf("Inside localDemo: globalCounter = %d\n", globalCounter);
}

// MAIN FUNCTION
int main() {

    // Declare a local variable
    int localCounter = 50;

    // Display global and local variables
    printf("In main: globalCounter = %d\n", globalCounter);
    printf("In main: localCounter = %d\n", localCounter);

    // Call the functions
    displayGlobal();
    modifyGlobal();
    localDemo();

    // Display the modified global variable
    printf("Back in main: globalCounter = %d\n", globalCounter);

    return 0;
}
