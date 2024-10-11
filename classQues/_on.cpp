#include<iostream>
using namespace std;
class A{
	int a,b;
		A(){
			cout<<"Constructor!!";
			a=10;
			b=20;
		}
	public:
		static void get(){
			cout<<"\nGet data!!\n";
			A ob;
			cout<<ob.a<<" "<<ob.b;
		}
};
int main(){
	A::get();
	
	return 0;
}
