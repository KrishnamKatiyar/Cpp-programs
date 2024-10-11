#include<iostream>
using namespace std;
class A{
	public:
		void d(){
			cout<<"dddd\n";
		}
};
class B : public A{
	public:
		void d(int x){
			cout<<x;
		}
};
int main(){
	B ob;
	ob.d();
	ob.d(8);
	
	return 0;
}
