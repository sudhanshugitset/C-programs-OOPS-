#include <iostream>
#include <conio.h>

using namespace std;

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

int main() {
    int year;

    // Input
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a leap year
    if (isLeapYear(year))
        cout << year << " is a leap year";
    else
        cout << year << " is not a leap year";

    getch(); // For Turbo C compiler
    return 0;
}

