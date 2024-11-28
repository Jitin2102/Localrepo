#include <iostream>
using namespace std;
class Rectangle {
public:
    double length;
    double breadth;

    double calculateArea() {
        return length * breadth;
    }

    double calculatePerimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    // Create an object of Rectangle class
    Rectangle rect;

    rect.length = 5.5;
    rect.breadth = 3.5;

    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    return 0;
}
