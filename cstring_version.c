#include <stdio.h>
#include <string.h> // For strlen, strcpy and strcspn

int main() {

    // Declare a C-string (character array) with a maximum size
    char name[50];

    // Ask the user to enter their name
    printf("Enter your name: ");

    // Read the user's full name, including spaces
    fgets(name, 50, stdin);

    // Remove the newline character
    name[strcspn(name, "\n")] = '\0';

    // Display the name
    printf("Name: %s\n", name);

    // Calculate and display the length of the name
    printf("Length: %zu\n", strlen(name));

    // Display the first character
    printf("First character: %c\n", name[0]);

    // Copy the name into another character array
    char copy[50];
    strcpy(copy, name);

    // Display the copied name
    printf("Copy: %s\n", copy);

    return 0;
}
