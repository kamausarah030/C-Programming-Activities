// ============================================================
// ACTIVITY 2: STACK VS HEAP STRUCTS IN C
// Learning Outcome: Analyse stack vs heap allocation
// ============================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char model[20];
};

// Function to simulate a constructor
void initCar(struct Car *c, const char *modelName) {
    strcpy(c->model, modelName);
    printf("Car created: %s\n", c->model);
}

// Function to simulate a destructor (cleanup)
void destroyCar(struct Car *c) {
    printf("Car destroyed: %s\n", c->model);
}

int main() {

    printf("--- Creating Stack Object ---\n");

    // STACK ALLOCATION
    struct Car stackCar;
    initCar(&stackCar, "Toyota");

    printf("\n--- Creating Heap Object ---\n");

    // HEAP ALLOCATION
    struct Car *heapCar = (struct Car*)malloc(sizeof(struct Car));

    // Check if malloc succeeded
    if (heapCar != NULL) {
        initCar(heapCar, "Honda");

        // Access heap object members
        printf("Heap car model: %s\n", heapCar->model);
    }

    printf("\n--- End of main function ---\n");

    // Free heap memory
    if (heapCar != NULL) {
        destroyCar(heapCar);
        free(heapCar);
        heapCar = NULL;
    }

    // Stack memory is managed automatically

    return 0;
}