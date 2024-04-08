#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int num1, num2, sum;

    // Input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Addition
    sum = num1 + num2;

    // Output
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum;

    getch(); // For Turbo C compiler
    return 0;
}

