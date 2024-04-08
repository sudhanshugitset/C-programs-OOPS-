#include <iostream>

class Point {
private:
  int x;
  int y;

public:
  Point() : x(0), y(0) {

  void display() {
    std::cout << "Point coordinates: (" << x << ", " << y << ")" << std::endl;
  }
};

int main() {
  // Create a Point object using the default constructor
  Point point1;

  // Display the point coordinates
  point1.display();

  return 0;
}

