#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
int main() {
    // Declare variables to store the user's answers
    char name[MAX_LEN];
    char course[MAX_LEN];
    char hobby[MAX_LEN];
    char reason[MAX_LEN];
    char expectation[MAX_LEN];
    char definition[MAX_LEN];
    // Welcome message
    printf("========================================\n");
    printf(" WELCOME TO YOUR FIRST C PROGRAM!\n");
    printf("========================================\n\n");
    // Question 1: Name
    printf("1. What is your name? ");
    fgets(name, MAX_LEN, stdin);
    name[strcspn(name, "\n")] = '\0';
    // Question 2: Course
    printf("2. What course are you doing? (BBIT/BCS): ");
    fgets(course, MAX_LEN, stdin);
    course[strcspn(course, "\n")] = '\0';
    // Question 3: Hobby
    printf("3. What is your hobby? ");
    fgets(hobby, MAX_LEN, stdin);
    hobby[strcspn(hobby, "\n")] = '\0';
    // Question 4: Reason for choosing the course
    printf("4. Why did you choose this course? ");
    fgets(reason, MAX_LEN, stdin);
    reason[strcspn(reason, "\n")] = '\0';
    // Question 5: Expectations
    printf("5. What do you expect to learn in programming? ");
    fgets(expectation, MAX_LEN, stdin);
    expectation[strcspn(expectation, "\n")] = '\0';
    // Question 6: Definition of programming
    printf("6. In your own words, what is programming? ");
    fgets(definition, MAX_LEN, stdin);
    definition[strcspn(definition, "\n")] = '\0';
    // Display profile summary
    printf("\n========================================\n");
    printf(" YOUR PROFILE SUMMARY\n");
    printf("========================================\n\n");
    printf("Name: %s\n", name);
    printf("Course: %s\n", course);
    printf("Hobby: %s\n", hobby);
    printf("Reason: %s\n", reason);
    printf("Expectation: %s\n", expectation);
    printf("Programming is: %s\n", definition);
    printf("\n========================================\n");
    printf(" Thank you for completing this!\n");
    printf("========================================\n");
    // End the program successfully
    return 0;
}