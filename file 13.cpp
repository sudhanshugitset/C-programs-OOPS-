#include <iostream>
#include <conio.h>

using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    friend int calculateArea(Rectangle rect);
};

int calculateArea(Rectangle rect) {
    return rect.width * rect.height;
}

int main() {
    Rectangle rect(4, 5);
    int area = calculateArea(rect);
    
    cout << "Area of the rectangle: " << area;

    getch(); // For Turbo C compiler
    return 0;
}

