
#include <iostream>
using namespace std;

// The main function
int main() {

    // Declare variables
    int age;
    bool hasTicket;
    bool isMember;
    bool isBanned;

    // Get user input
    cout << "Enter age: ";
    cin >> age;

    cout << "Do you have a ticket? (1 for yes, 0 for no): ";
    cin >> hasTicket;

    cout << "Are you a member? (1 for yes, 0 for no): ";
    cin >> isMember;

    cout << "Are you banned? (1 for yes, 0 for no): ";
    cin >> isBanned;

    // Apply logical operators
    // Eligible if:
    // Age is 18 or above AND has a ticket AND NOT banned
    // OR is a member AND NOT banned

    bool canEnter = (age >= 18 && hasTicket && !isBanned) ||
                    (isMember && !isBanned);

    // Display the result
    if (canEnter) {
        cout << "You can enter the event!" << endl;
    } else {
        cout << "Sorry, you cannot enter." << endl;
    }

    // End the program
    return 0;
}
