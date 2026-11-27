#include <stdio.h>
#include <stdlib.h>

int main() {

// 1. DECLARE FILE POINTERS
FILE *inputFile;
FILE *outputFile;

// 2. OPEN FILE FOR READING
inputFile = fopen("numbers.txt", "r");

// Check if file opened successfully
if (inputFile == NULL) {
    printf("Error: Could not open numbers.txt for reading!\n");
    return 1;
}

int num;
int sum = 0;

printf("Reading numbers from file...\n");

// 3. READ DATA IN A LOOP
while (fscanf(inputFile, "%d", &num) != EOF) {
    printf("Read: %d\n", num);

    sum += num;
}

// 4. CLOSE INPUT FILE
fclose(inputFile);

printf("Total Sum: %d\n", sum);

// 5. OPEN FILE FOR WRITING
outputFile = fopen("sum.txt", "w");

if (outputFile == NULL) {
    printf("Error: Could not create sum.txt for writing!\n");
    return 1;
}

// 6. WRITE DATA TO THE FILE
fprintf(outputFile, "The total sum is: %d\n", sum);
fprintf(outputFile, "Calculated automatically by the C program.\n");

// 7. CLOSE OUTPUT FILE
fclose(outputFile);

printf("Result successfully saved to sum.txt!\n");

return 0;

}