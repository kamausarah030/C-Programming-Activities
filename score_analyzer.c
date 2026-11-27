#include <stdio.h>

// FUNCTION: calculateAverage
// Purpose: Calculate the average of an array of scores

double calculateAverage(int scores[], int size) {

    int sum = 0;

    // Add all the scores
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }

    // Calculate and return the average
    return (double)sum / size;
}

// FUNCTION: displayAboveAverage
// Purpose: Display scores above the average

void displayAboveAverage(int scores[], int size, double average) {

    printf("\nScores above average (%.2f):\n", average);

    int found = 0;

    // Check each score
    for (int i = 0; i < size; i++) {

        if (scores[i] > average) {

            printf("Score %d at position %d\n", scores[i], i + 1);

            found = 1;
        }
    }

    // Check if any scores are above average
    if (!found) {
        printf("None\n");
    }
}

// MAIN FUNCTION
int main() {

    const int SIZE = 10;

    int scores[SIZE];

    // Ask the user to enter 10 scores
    printf("Enter %d student scores:\n", SIZE);

    for (int i = 0; i < SIZE; i++) {

        printf("Score %d: ", i + 1);

        scanf("%d", &scores[i]);
    }

    // Calculate the average
    double average = calculateAverage(scores, SIZE);

    // Display the results
    printf("\n--- Results ---\n");

    printf("Average score: %.2f\n", average);

    // Display scores above average
    displayAboveAverage(scores, SIZE, average);

    return 0;
}
