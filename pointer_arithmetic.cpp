#include <iostream>
using namespace std;

int main() {

    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Declare a pointer
    int* ptr = numbers;

    cout << "Array elements accessed via pointer arithmetic:" << endl;

    // Loop through the array using a pointer
    for (int i = 0; i < 5; i++) {

        cout << "Value: " << *ptr << endl;

        // Move pointer to the next element
        ptr++;
    }

    // Reset pointer to the beginning
    ptr = numbers;

    cout << "\nAccessing using offset arithmetic:" << endl;

    // Access elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {

        cout << "Index " << i << " has value: " << *(ptr + i) << endl;
    }

    return 0;
}