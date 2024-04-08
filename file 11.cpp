#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int limit;

    // Input
    cout << "Enter the limit: ";
    cin >> limit;

    // Output
    cout << "Even numbers up to " << limit << " are: ";
    for (int i = 2; i <= limit; i += 2) {
        cout << i << " ";
    }

    getch(); // For Turbo C compiler
    return 0;
}

