#include<iostream>
using namespace std;

class A{
	int A_pri;
	protected:
		int A_pro;
	public:
		int A_pub;
		void get_A(){
			A_pri = 100;
			A_pro = 200;
			A_pub = 300;
			cout<<"private = "<<A_pri<<endl;
			cout<<"protected = "<<A_pro<<endl;
			cout<<"public = "<<A_pub<<endl;
			
		}
};

class B{
	int B_pri;
	protected:
		int B_pro;
	public:
		int B_pub;
		void get_B(){
			B_pri = 101;
			B_pro = 201;
			B_pub = 301;
			cout<<"private = "<<B_pri<<endl;
			cout<<"protected = "<<B_pro<<endl;
			cout<<"public = "<<B_pub<<endl;
			
		}
};

class C : private A , private B{
	public:
		void get_C(){
			get_A();
			get_B();
		}
};

class D : private C{
	public:
		void get_D(){
			get_C();
		}
};

int main(){
	D ob;
	ob.get_D();
	
	return 0;
	
}
