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
			cout<<"logic B"<<endl;
		}
};

int main(){
	A ob1;
	ob1.logic();
	
	B ob2;
	ob2.logic();
	ob2.logic();
	
	return 0;
}
