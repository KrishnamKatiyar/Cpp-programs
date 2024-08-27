#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(){
		}
		A(int x):a(x){	
		}
		void display(){
			cout<<"a = "<<a<<endl;
		}
		A& operator++(int){
			a++;
			return *this;
		}
};
int main(){
	A obj(100);
	
	obj.display();
	
	A obj1 = obj++;
	obj1.display();
	
	return 0;
	
}
