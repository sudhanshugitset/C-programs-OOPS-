#include <iostream>
#include <conio.h>

using namespace std;

int sumOfNaturalNumbers(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int num;

    // Input
    cout << "Enter a positive integer: ";
    cin >> num;

    // Calculating the sum of natural numbers
    int sum = sumOfNaturalNumbers(num);

    // Output
    cout << "Sum of natural numbers up to " << num << " is: " << sum;

    getch(); // For Turbo C compiler
    return 0;
}

