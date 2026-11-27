#include <iostream>
using namespace std;

int main() {

    // 1. A normal integer variable
    int originalValue = 100;

    // 2. A reference variable
    int& refValue = originalValue;

    // 3. A pointer variables
    int* ptrValue = &originalValue;

    cout << "--- Initial State ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // MODIFICATION 1
    // Changing the reference changes the original variable
    refValue = 200;

    cout << "\n--- After setting refValue = 200 ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // MODIFICATION 2
    // Changing the value via the pointer
    *ptrValue = 300;

    cout << "\n--- After setting *ptrValue = 300 ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;

    // MODIFICATION 3
    // Changing what the pointer points to
    int anotherValue = 500;
    ptrValue = &anotherValue;

    cout << "\n--- After pointing ptrValue to anotherValue ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // End of program
    return 0;
}