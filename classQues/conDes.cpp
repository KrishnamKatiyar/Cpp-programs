#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(){
			cout<<"Constructor!! \n";
			a=10;
			b=20;
		}
		~A(){
			cout<<"Destructor!! \n";
			
		}
};
int main(){
	A ob1,ob2;
	cout<<"welcome \n";
	A ob3;
	{
		cout<<"hi \n";
		A ob4;
		cout<<"sorry \n";
	}
	cout<<"bye \n";
	return 0;
}
