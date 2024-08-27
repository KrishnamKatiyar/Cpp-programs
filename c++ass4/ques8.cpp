#include <iostream>
using namespace std;

class Shape {
public:
    void printShape() {
        cout << "This is a shape" << endl;
    }
};

class Polygon : public Shape {
public:
    void printShape() {
        cout << "Polygon is a shape" << endl;
    }
};

class Rectangle : public Polygon {
public:
    void printShape() {
        cout << "Rectangle is a polygon" << endl;
    }
};

class Triangle : public Polygon {
public:
    void printShape() {
        cout << "Triangle is a polygon" << endl;
    }
};

class Square : public Rectangle {
public:
    void printShape() {
        cout << "Square is a rectangle" << endl;
    }
};

int main() {
    Shape shape;
    Polygon polygon;
    Rectangle rectangle;
    Triangle triangle;
    Square square;

    shape.printShape();
    polygon.printShape();
    rectangle.printShape();
    triangle.printShape();
    square.printShape();

    return 0;
}

