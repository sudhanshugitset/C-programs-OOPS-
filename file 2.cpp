#include <iostream>
#include <conio.h>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    // Input
    cout << "Enter a number: ";
    cin >> num;

    // Calculating factorial
    int result = factorial(num);

    // Output
    cout << "Factorial of " << num << " is: " << result;

    getch(); // For Turbo C compiler
    return 0;
}

