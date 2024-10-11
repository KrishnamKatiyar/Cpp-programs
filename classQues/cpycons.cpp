#include<iostream>
using namespace std;

class A{
	int a,b;
	public:
		A(){
		}
		A(int x,int y){
			a=x;
			b=y;
		}
		void get(){
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
};

int main(){
	A ob1(12,23);
	ob1.get();
	cout<<&ob1<<endl;
	
	A &ob2(ob1);
	ob2.get();
	cout<<&ob2<<endl;
	
	return 0;
}
