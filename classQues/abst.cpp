#include<iostream>
using namespace std;
class A{
	public:
		void logic(){
			cout<<"Logic"<<endl;
		}
		virtual void myLogic()=0;
};
class B : public A{
	public:
		void myLogic(){
			cout<<"My Logic"<<endl;
		}
};
int main(){
//	A ob1;
    A *ptr;
	B ob2;
	ob2.logic();
	ob2.myLogic();
	
//	ptr = &ob1;
	ptr->logic();
	ptr->myLogic();
	
	return 0;
}
