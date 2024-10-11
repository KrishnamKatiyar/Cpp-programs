#include<iostream>
using namespace std;
int global=0;

class A{
	int a,b;
	public:
		A(){
		}
		A(int x,int y){
			a=x;
			b=y;
		}
		~A(){
			cout<<"Destructor is called!!\n";
			::global = a+b;
		}
		void get(){
			cout<<a<<" "<<b<<endl;
		}
};

int main(){
	{
		A ob(10,20);
		ob.get();
		cout<<"local anonymous block\n";
		{
			A ob2(11,22);
			ob2.get();
		}
		cout<<"global value = "<<global<<endl;
	}
	cout<<"global value = "<<global<<endl;
	
	return 0;
}
