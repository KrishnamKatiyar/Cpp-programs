#include <iostream>
using namespace std;

class Shape {
protected:
    double width;
    double height;
public:
    Shape(double w, double h) : width(w), height(h) {}
    virtual double area() = 0; // Pure virtual function
};

class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}
    double area() override {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}
    double area() override {
        return width * height;
    }
};

int main() {
    Shape* triangle = new Triangle(5, 10);
    cout << "Area of the triangle: " << triangle->area() << std::endl;
    delete triangle;

    Shape* rectangle = new Rectangle(5, 10);
    cout << "Area of the rectangle: " << rectangle->area() << std::endl;
    delete rectangle;

    return 0;
}

