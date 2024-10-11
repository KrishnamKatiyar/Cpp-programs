#include<iostream>
using namespace std;
class A{
	int a,b;
	static int cnt;
	public:
		
		A(){
			cout<<"Constructor!!";
			a=10;
			b=20;
			cnt++;
		}static int objCount(){
			return cnt;
		}
		void get(){
			cout<<"\nGet data!!\n";
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};
int A::cnt;
int main(){
	A ob1,ob2;
	ob1.get();
	ob2.get();
	int cnt;
	cnt = A::objCount();
	cout<<"\n\ncount is : "<<cnt<<endl;
	
	return 0;
}
