#include <iostream>
using namespace std;

// The main function
int main() {

    // Declare three integer variables
    int a, b, c;

    // Ask the user to enter three numbers
    cout << "Enter three numbers: ";

    // Read the three numbers
    cin >> a >> b >> c;

    // Check if a is greater than b
    if (a > b) {

        // Check if b is greater than c
        if (b > c) {
            cout << "Path 1: a > b > c" << endl;
        } else {

            // Check if a is greater than c
            if (a > c) {
                cout << "Path 2: a > c > b" << endl;
            } else {
                cout << "Path 3: c > a > b" << endl;
            }
        }

    } else {

        // Check if a is greater than c
        if (a > c) {
            cout << "Path 4: b > a > c" << endl;
        } else {

            // Check if b is greater than c
            if (b > c) {
                cout << "Path 5: b > c > a" << endl;
            } else {
                cout << "Path 6: c > b > a" << endl;
            }
        }
    }

    // End the program
    return 0;
}
