#include<iostream>
using namespace std;

class Daddy{
	public:
		virtual void logic(){   // parent class is giving permission to override by using keyword " virtual "
			cout<<"Daddy class logic "<<endl;
		}
};
class Child1 : public Daddy{
	public:
		void logic(){
			cout<<"Child 1 class logic "<<endl;
		}
};
class Child2 : public Daddy{
	public:
		void logic(){
			cout<<"Child 2 class logic "<<endl;
		}
};

int main(){
	Daddy *ptr;  // it is mandatory to use pointer in dynamic binding
	
	Daddy obj;	
	ptr = &obj;	
	ptr->logic();   
	
	Child1 obj2;
	ptr = &obj2;
	ptr->logic();
	
	Child2 obj3;
	ptr = &obj3;
	ptr->logic();
	  
	
	return 0;
}
