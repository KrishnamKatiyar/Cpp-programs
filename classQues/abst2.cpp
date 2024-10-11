#include<iostream>
using namespace std;
class A{
	public:
		void logic(){
			cout<<"Logic"<<endl;
		}
		virtual int add(int , int)=0;
		virtual int sub(int , int)=0;
		virtual int mul(int , int)=0;
		virtual float div(int , int)=0;
};
class B : public A{
	public:
		int add(int a, int b){
			return a+b;
		}
		int sub(int a, int b){
			return a-b;
		}
};
class C : public B{
	public:
		int mul(int a, int b){
			return a*b;
		}
		float div(int a, int b){
			return (float)a/(float)b;
		}
};
int main(){
//	C ob1;
//	cout<<ob1.add(4,6)<<endl;
//	cout<<ob1.sub(4,6)<<endl;
//	cout<<ob1.mul(4,6)<<endl;
//	cout<<ob1.div(4,6)<<endl;

    A *ptr;
    C ob;
    ptr = &ob;	
    cout<<ptr->add(4,6)<<endl;
	cout<<ptr->sub(4,6)<<endl;
	cout<<ptr->mul(4,6)<<endl;
	cout<<ptr->div(4,6)<<endl;
    
	
	return 0;
}
