#include<iostream>
using namespace std;

class A{
	int a,b,c;
	public:
		A(){
		}
		A(int a,int b,int c):a(a),b(b),c(c){	
		}
		void display(){
			cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
		}
		A& operator--(){
			--a;
			--b;
			--c;
			return *this;
		}
};
int main(){
	A obj(-10,20,-30);
	
	obj.display();
	
	A obj1 = --obj;
	obj1.display();
	
	return 0;
	
}
