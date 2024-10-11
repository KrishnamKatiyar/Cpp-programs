#include<iostream>
using namespace std;

class A{
	public:
		void logic(){
			cout<<"logic A"<<endl;
		}
};
class B : public A{
	public:
		void logic(){
			A::logic();
			cout<<"logic B"<<endl;  //extending the logic of parent class..			
		}
};

int main(){
	A ob1;
	ob1.logic();
	
	B ob2;
	ob2.logic();
	
	return 0;
}
