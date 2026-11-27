#include <iostream>
using namespace std;

// Define a class to manage the dynamic array
class DynamicArray {

private:
    int* data;       // Pointer to the dynamically allocated array
    int size;        // Number of elements stored
    int capacity;    // Total available slots

public:

    // CONSTRUCTOR
    DynamicArray(int initialCapacity) {
        capacity = initialCapacity;
        size = 0;

        // Allocate memory for the array
        data = new int[capacity];
    }

    // DESTRUCTOR
    ~DynamicArray() {
        // Release dynamically allocated memory
        delete[] data;
    }

    // Method to add a new element
    void push_back(int value) {

        // Check whether the array is full
        if (size == capacity) {

            // Double the capacity
            int newCapacity = capacity * 2;

            // Allocate a larger array
            int* newData = new int[newCapacity];

            // Copy old elements into the new array
            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }

            // Delete the old array
            delete[] data;

            // Update the pointer and capacity
            data = newData;
            capacity = newCapacity;

            cout << "[Resized capacity from "
                 << capacity / 2 << " to "
                 << capacity << "]" << endl;
        }

        // Insert the new value
        data[size] = value;
        size++;
    }

    // Method to display array contents
    void display() {

        cout << "Array (Size: " << size
             << ", Capacity: " << capacity << "): ";

        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }

        cout << endl;
    }
};

// MAIN FUNCTION
int main() {

    // Create an array with initial capacity of 2
    DynamicArray myArray(2);

    cout << "Created dynamic array with capacity 2." << endl;

    // Add the first two elements
    myArray.push_back(10);
    myArray.push_back(20);

    myArray.display();

    // Adding the third element triggers resizing
    cout << "\nAdding third element..." << endl;

    myArray.push_back(30);
    myArray.display();

    // Adding fourth and fifth elements
    cout << "\nAdding fourth and fifth elements..." << endl;

    myArray.push_back(40);
    myArray.push_back(50);

    myArray.display();

    // Destructor automatically releases memory
    return 0;
}
