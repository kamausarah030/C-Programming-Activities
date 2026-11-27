
#include <stdio.h>
#include <string.h>

// Define a structure named Student
struct Student {
    char name[50];
    int age;
};

// SETTER FUNCTION
void setAge(struct Student *s, int newAge) {

    // Check if the new age is realistic
    if (newAge > 0 && newAge < 120) {
        s->age = newAge;
    } else {
        printf("Error: Invalid age! Age must be between 1 and 119.\n");
        s->age = 0;
    }
}

// GETTER FUNCTION
int getAge(struct Student *s) {
    return s->age;
}

int main() {

    // Create a Student structure
    struct Student s1;

    // Initialize the data
    strcpy(s1.name, "Alice");

    // Set the age safelySS
    setAge(&s1, 20);

    // Display student information
    printf("Student Name: %s\n", s1.name);
    printf("Student Age: %d\n", getAge(&s1));

    // Try to set an invalid age
    printf("\nAttempting to change age to -5...\n");

    setAge(&s1, -5);

    printf("Age after invalid attempt: %d\n", getAge(&s1));

    return 0;
}
