#include<iostream>
using namespace std;
class Calc{
	int l,b;
	public:
		void set_dim(){
			cout<<"Enter the First Number ";
			cin>>l;
			cout<<"\nEnter the Second Number ";
			cin>>b;
		}
		void Add(){
			cout<<"\n Addition is "<<l+b;
		}
		void Sub(){
			cout<<"\n Subtraction is "<<l-b;
		}
		void Mul(){
			cout<<"\n Multiplication is "<<l*b;
		}
		void Div(){
			cout<<"\n Division is "<<(float)l/b;
		}
		
};
int main(){
	Calc a;
	a.set_dim();
	a.Add();
	a.Sub();
	a.Mul();
	a.Div();
	return 0;
}
