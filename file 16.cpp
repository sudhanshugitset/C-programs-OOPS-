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
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Creating an Employee object
    Employee emp("Sudhanshu", 100000);

    // Displaying employee information
    emp.displayInfo();

    getch(); // For Turbo C compiler
    return 0;
}

