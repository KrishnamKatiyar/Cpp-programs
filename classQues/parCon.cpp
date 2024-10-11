#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(){
			cout<<"non/0 para .Constructor!!";
			a=0;
			b=0;
		}
		A(int x){
			cout<<"one para. Constructor!!";
			a=x;
			b=0;
		}
		A(int x, int y){
			cout<<"two para. Constructor!!";
			a=x;
			b=y;
		}
		void get(){
			cout<<"\nGet data!!\n";
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};
int main(){
//	A ob1; 
	A ob1 = A();
	ob1.get();
	
//	A ob2(11);
	A ob2 = A(11);
	ob2.get();
	
//	A ob3(11,12);
	A ob3 = A(11,12);
	ob3.get();
	
	return 0;
}
