#include<iostream>
using namespace std;

class unitTest{
	public:
		int a;
		unitTest(){
		}
		unitTest(int Umarks):a(Umarks){	
		}
		void display(){
			cout<<"unit test marks = "<<a<<endl;
		}
};

class Practical{
	public:
		int b;
		Practical(){
		}
		Practical(int Pmarks):b(Pmarks){	
		}
		void display(){
			cout<<"practical marks = "<<b<<endl;
		}
		Practical operator*(unitTest& u){
			return Practical(b * u.a);
		}
};
int main(){
	unitTest u(70);
	cout<<"Unit Test"<<endl;
	u.display();
	
	Practical p(70);
	cout<<"Practical"<<endl;
	p.display();
	
	Practical result = p * u;
	
	cout<<"result : "<<endl;
	result.display();
	
	
	return 0;
	
}
