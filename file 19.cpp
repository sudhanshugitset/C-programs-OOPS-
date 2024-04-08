#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int num = 2;

    cout << "Table of " << num << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    getch(); // For Turbo C compiler
    return 0;
}

