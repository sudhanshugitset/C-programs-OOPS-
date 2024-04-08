#include <iostream>
#include <conio.h>

using namespace std;

class Example {
private:
    static int count; // Static member variable

public:
    Example() {
        count++; // Increment count each time an object is created
    }

    static int getCount() { // Static member function to access count
        return count;
    }
};

int Example::count = 0; // Initialize static member variable

int main() {
    Example obj1, obj2, obj3;

    // Output count of objects
    cout << "Number of objects created: " << Example::getCount();

    getch(); // For Turbo C compiler
    return 0;
}

