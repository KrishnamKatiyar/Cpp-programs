#include<iostream>
using namespace std;

class Shape{
	public:
		void area(){
			cout<<"We can calculate area of shape : "<<endl;
		}
};
class Square : public Shape{
	public:
		void area(int a){
			Shape::area();
			int area = a*a;
			cout<<"area of square is : "<<area<<endl;  //extending the logic of parent class..			
		}
};
class Rectangle : public Shape{
	public:
		void area(int a, int b){
			Shape::area();
			int area = a*b;
			cout<<"area of reactangle is : "<<area<<endl;  //extending the logic of parent class..			
		}
};
class Circle : public Shape{
	public:
		void area(int r){
			Shape::area();
			float area = 3.14*r*r;
			cout<<"area of square is : "<<area<<endl;  //extending the logic of parent class..			
		}
};

int main(){
	Square ob1;
	ob1.area(4);
	
	Rectangle ob2;
	ob2.area(5,6);
	
	Circle ob3;
	ob3.area(2);
	
	return 0;
}
