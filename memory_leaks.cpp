#include <iostream>
using namespace std;

// ACTIVITY 3A: THE MEMORY LEAK
void createLeak() {

    // Allocate memory dynamically
    int* ptr = new int(42);

    cout << "Inside function. The value is: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    // THE LEAK:
    // Memory is not released using delete.
    // The pointer disappears when the function ends.
}

// ACTIVITY 3B: FIXING THE MEMORY LEAK
void fixLeak() {

    // Allocate memory dynamically
    int* ptr = new int(42);

    cout << "Inside fixed function. Value: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    // Free the allocated memory
    delete ptr;

    // Prevent the pointer from holding an invalid address
    ptr = nullptr;

    cout << "Memory has been successfully freed." << endl;
}

int main() {

    cout << "--- Testing the Memory Leak ---" << endl;

    createLeak();

    cout << "Function finished. The memory is now leaked." << endl;

    cout << "\n--- Testing the Fix ---" << endl;

    fixLeak();

    cout << "\nProgram completed successfully." << endl;

    return 0;
}
