#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

struct Course {
    string name;
    double grade;
    double credits;
};

// Function to calculate semester GPA
double calculateGPA(double totalPoints, double totalCredits) {
    if (totalCredits == 0)
        return 0;

    return totalPoints / totalCredits;
}

int main() {
    int n;

    cout << "====================================\n";
    cout << "         CGPA CALCULATOR             \n";
    cout << "====================================\n";

    cout << "Enter number of courses: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of courses!\n";
        return 1;
    }

    vector<Course> courses(n);

    double totalCredits = 0;
    double totalGradePoints = 0;

    // Input course details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Course " << i + 1 << endl;

        cout << "Course Name: ";
        cin >> ws;
        getline(cin, courses[i].name);

        cout << "Grade Point (0-10): ";
        cin >> courses[i].grade;

        cout << "Credit Hours: ";
        cin >> courses[i].credits;

        if (courses[i].grade < 0 || courses[i].grade > 10 ||
            courses[i].credits <= 0) {
            cout << "Invalid grade or credit hours!\n";
            return 1;
        }

        totalCredits += courses[i].credits;

        totalGradePoints +=
            courses[i].grade * courses[i].credits;
    }

    // Calculate semester GPA
    double semesterGPA =
        calculateGPA(totalGradePoints, totalCredits);

    // Previous academic record
    double previousCGPA, previousCredits;

    cout << "\nEnter previous CGPA (enter 0 if none): ";
    cin >> previousCGPA;

    cout << "Enter previously completed credit hours: ";
    cin >> previousCredits;

    if (previousCGPA < 0 || previousCGPA > 10 ||
        previousCredits < 0 ||
        (previousCGPA == 0 && previousCredits > 0)) {
        cout << "Invalid previous academic record!\n";
        return 1;
    }

    // Calculate overall CGPA
    double overallCGPA =
        (previousCGPA * previousCredits + totalGradePoints) /
        (previousCredits + totalCredits);

    // Display course details
    cout << "\n====================================\n";
    cout << "          ACADEMIC REPORT            \n";
    cout << "====================================\n";

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++) {
        cout << "\nCourse: " << courses[i].name;
        cout << "\nGrade Point: " << courses[i].grade;
        cout << "\nCredit Hours: " << courses[i].credits;
        cout << "\nGrade Points Earned: "
             << courses[i].grade * courses[i].credits << endl;
    }

    cout << "\n------------------------------------\n";
    cout << "Total Credit Hours: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Semester GPA: " << semesterGPA << endl;
    cout << "Overall CGPA: " << overallCGPA << endl;
    cout << "====================================\n";

    return 0;
}