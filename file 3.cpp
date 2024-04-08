#include <iostream>
#include <conio.h>

using namespace std;

void fibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
}

int main() {
    int terms;

    // Input
    cout << "Enter the number of terms: ";
    cin >> terms;

    // Output
    fibonacci(terms);

    getch(); // For Turbo C compiler
    return 0;
}

