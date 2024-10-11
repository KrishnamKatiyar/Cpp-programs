#include<iostream>
using namespace std;
class A{
	int pri;
	protected:
		int pro;
	public:
		int pub;
		void get(){
			pri = 100;
			pro = 200;
			pub = 300;
			cout<<"private = "<<pri<<endl;
			cout<<"protected = "<<pro<<endl;
			cout<<"public = "<<pub<<endl;
			
		}
};
class B : private A{
	public:
		void Bget(){
			get();
		}
};
int main(){
	B ob1;
	ob1.Bget();
	
	return 0;
}
