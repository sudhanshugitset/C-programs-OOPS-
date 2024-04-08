#include <iostream>
#include <conio.h>

using namespace std;

class Student {
private:
    string name;
    double marks;

public:
    Student(string studentName, double studentMarks) : name(studentName), marks(studentMarks) {}

    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

    void displayResult() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    string name;
    double marks;

    // Input
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter marks: ";
    cin >> marks;

    // Create Student object
    Student student(name, marks);

    // Display result
    student.displayResult();

    getch(); // For Turbo C compiler
    return 0;
}

