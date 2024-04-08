#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

bool isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if num is equal to the sum of nth powers of its digits
    if (result == num)
        return true;
    else
        return false;
}

int main() {
    int num;

    // Input
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is Armstrong
    if (isArmstrong(num))
        cout << num << " is an Armstrong number";
    else
        cout << num << " is not an Armstrong number";

    getch(); // For Turbo C compiler
    return 0;
}

