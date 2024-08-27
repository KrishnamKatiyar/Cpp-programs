#include <iostream>

using namespace std;


class Shape {
public:
    
    virtual double area() {
        return 0; 
    }
};


class Circle : public Shape {
    double radius;

public:
    
    Circle(double r) : radius(r) {}

   
    double area() override {
        return 3.14 * radius * radius;
    }
};


class Rectangle : public Shape {
    double length;
    double width;

public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

   
    double area() override {
        return length * width;
    }
};

int main() {
    
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    Shape *shape1 = &circle;
    Shape *shape2 = &rectangle;

   
    cout << "Area of the circle: " << shape1->area() << endl;
    cout << "Area of the rectangle: " << shape2->area() << endl;

    return 0;
}

