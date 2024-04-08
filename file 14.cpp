#include <iostream>
#include <cmath> // For M_PI constant
#include <conio.h>

using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() {
        return M_PI * pow(radius, 2);
    }

    double getCircumference() {
        return 2 * M_PI * radius;
    }
};

int main() {
    double radius;

    // Input
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Create Circle object
    Circle circle(radius);

    // Calculate area and circumference
    double area = circle.getArea();
    double circumference = circle.getCircumference();

    // Output
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference;

    getch(); // For Turbo C compiler
    return 0;
}

