#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(){
			cout<<"Constructor!!";
			a=10;
			b=20;
		}
		void get(){
			cout<<"\nGet data!!\n";
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};
int main(){
	A ob1,ob2;
	ob1.get();
	ob2.get();
	
	return 0;
}
