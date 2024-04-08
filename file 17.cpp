#include <iostream>
#include <conio.h>

using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee(string empName, double empSalary) : name(empName), salary(empSalary) {}

    void displayInfo() {
        cout << "Employee Name: " << this->name << endl; // Using "this" pointer to access member variables
        cout << "Salary: " << this->salary << endl; // Using "this" pointer to access member variables
    }
};

int main() {
    // Creating an Employee object
    Employee emp("Aarav", 50000);

    // Displaying employee information
    emp.displayInfo();

    getch(); // For Turbo C compiler
    return 0;
}

