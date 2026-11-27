#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

// The main function
int main() {

    // Declare variables
    int students;
    int countA = 0, countB = 0, countC = 0;
    int countD = 0, countF = 0;

    // Display program heading
    cout << "===== GRADE CALCULATOR =====" << endl;

    // Ask for the number of students
    cout << "How many students? ";
    cin >> students;

    // Validate the number of students
    if (students <= 0) {
        cout << "Invalid number of students!" << endl;
        return 1;
    }

    // Loop through each student
    for (int i = 1; i <= students; i++) {

        string name;
        double score;
        char grade;
        char modifier = ' ';

        // Display student number
        cout << "\n===== STUDENT " << i << " =====" << endl;

        // Get student name
        cout << "Enter student name: ";

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, name);

        // Get student score
        cout << "Enter percentage score (0-100): ";
        cin >> score;

        // Validate the score
        if (score < 0 || score > 100) {
            cout << "Invalid score! Must be between 0 and 100." << endl;
            cout << "This student will not be included in the summary." << endl;
            continue;
        }

        // Determine base letter grade
        if (score >= 90) {
            grade = 'A';
        }
        else if (score >= 80) {
            grade = 'B';
        }
        else if (score >= 70) {
            grade = 'C';
        }
        else if (score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        // Determine plus/minus modifiers
        if (grade != 'F') {

            int lastDigit = (int)score % 10;

            if (grade == 'A') {

                if (score >= 97)
                    modifier = '+';
                else if (score < 93)
                    modifier = '-';

            }
            else {

                if (lastDigit >= 7)
                    modifier = '+';
                else if (lastDigit <= 2)
                    modifier = '-';
            }
        }

        // Display student results
        cout << "\n----- STUDENT RESULTS -----" << endl;

        cout << "Student Name: " << name << endl;

        cout << "Score: "
             << fixed << setprecision(1)
             << score << "%" << endl;

        cout << "Grade: " << grade;

        if (modifier != ' ') {
            cout << modifier;
        }

        cout << endl;

        // Display personalized messages
        switch (grade) {

            case 'A':
                cout << "Excellent work!" << endl;
                countA++;
                break;

            case 'B':
                cout << "Good job!" << endl;
                countB++;
                break;

            case 'C':
                cout << "Satisfactory." << endl;
                countC++;
                break;

            case 'D':
                cout << "Needs improvement." << endl;
                countD++;
                break;

            case 'F':
                cout << "Please seek help." << endl;
                countF++;
                break;
        }
    }

    // Display final summary
    cout << "\n================================" << endl;
    cout << "       FINAL GRADE SUMMARY      " << endl;
    cout << "================================" << endl;

    cout << "A Grades: " << countA << endl;
    cout << "B Grades: " << countB << endl;
    cout << "C Grades: " << countC << endl;
    cout << "D Grades: " << countD << endl;
    cout << "F Grades: " << countF << endl;

    cout << "================================" << endl;

    cout << "Total students graded: "
         << countA + countB + countC + countD + countF
         << endl;

    cout << "================================" << endl;

    // End the program
    return 0;
}
