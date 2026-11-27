#include <stdio.h>
#include <string.h>

// Parent structure
struct Shape {
    char color[20];
};

// Child structure
struct Circle {
    struct Shape base;
    double radius;
};

int main() {

    // Create a Circle
    struct Circle myCircle;

    // Initialize the inherited data
    strcpy(myCircle.base.color, "Red");

    // Initialize the Circle's unique data
    myCircle.radius = 5.0;

    // Display the information
    printf("Circle Color (Inherited): %s\n", myCircle.base.color);

    printf("Circle Radius (Specific): %.2f\n", myCircle.radius);

    return 0;
}