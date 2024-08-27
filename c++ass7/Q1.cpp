#include<iostream>
using namespace std;

class Shape{
	public:
		virtual double area() = 0;
		virtual double perimeter() = 0;
		virtual ~Shape(){}
};

class Circle : public Shape{
	double radius;
	
	public:
		Circle(double r):radius(r){}
		double area(){
			return 3.14*radius*radius;
		}
		double perimeter(){
			return 2*3.14*radius;
		}
};

class Square : public Shape{
	double side;
	
	public:
		Square(double s):side(s){}
		double area(){
			return side*side;
		}
		double perimeter(){
			return 4*side;
		}
};

int main(){
	Shape *circle = new Circle(3.0);
	Shape *square = new Square(4.0);
	
	cout<<"area of cirlce : "<<circle->area()<<endl;
	cout<<"area of square : "<<square->area()<<endl;
	cout<<"perimeter of cirlce : "<<circle->perimeter()<<endl;
	cout<<"perimeter of square : "<<square->perimeter()<<endl;
	
	
	return 0;
}
