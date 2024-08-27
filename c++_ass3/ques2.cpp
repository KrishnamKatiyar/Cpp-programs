#include<iostream>
using namespace std;

class Calculation{
	int num1, num2;
	public:
		Calculation(){
			num1 = num2 = 0;
		}
		Calculation(int x, int y){
			num1 = x;
			num2 = y;
		}
		void add(){
			cout<<"sum = "<<num1+num2<<endl;
		}
		void sub(){
			cout<<"diff = "<<num1-num2<<endl;
		}
		void mul(){
			cout<<"prod = "<<num1*num2<<endl;
		}
		void div(){
			cout<<"quo = "<<(float)num1/num2<<endl;
		}
		
		
};

int main(){
	int x,y;
	cin>>x>>y;
	
	Calculation ob(x,y);
	
	ob.add();
	ob.sub();
	ob.mul();
	ob.div();
	
	return 0;
}
