// ============================================================
// ACTIVITY 2: SIMULATING VIRTUAL FUNCTIONS
// Learning Outcome: Analyse function pointers
// ============================================================

#include <stdio.h>
#include <string.h>

// 1. Define a Function Pointer Type
typedef void (*SpeakFunction)();

// Base Struct
struct Animal {
    SpeakFunction speak;
};

// Derived Struct
struct Dog {
    struct Animal base;
};

// Actual functions

void genericSound() {
    printf("Animal makes a generic sound.\n");
}

void dogBark() {
    printf("Dog barks: Woof! Woof!\n");
}

int main() {

    printf("--- Simulating Non-Virtual (Base only) ---\n");

    struct Animal myAnimal;
    myAnimal.speak = genericSound;
    myAnimal.speak();

    printf("\n--- Simulating Virtual (Dynamic binding) ---\n");

    struct Dog myDog;

    // Assign dogBark to the inherited function pointer
    myDog.base.speak = dogBark;

    // Cast Dog pointer to Animal pointer
    struct Animal* pet = (struct Animal*)&myDog;

    // Call function through the pointer
    pet->speak();

    return 0;
}