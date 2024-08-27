#include<iostream>
using namespace std;

class ATM{
	int accNo, bal;
	public:
		ATM(){
			accNo = bal = 0;
		}
		ATM(int a, int b){
			accNo = a;
			bal = b;
		}
		void deposit(){
			int dep;
			cout<<"enter deposit amount : "<<endl;
			cin>>dep;
			bal += dep;
			cout<<"current balance : "<<bal<<endl;
			
		}
		void withd(){
			int withd;
			cout<<"enter withdrawal amount : "<<endl;
			cin>>withd;
			bal -= withd;
			cout<<"current balance : "<<bal<<endl;
			
		}
		void balan(){
			cout<<"current balance : "<<bal<<endl;
		}
};
int main(){
	int a,b;
	cout<<"enter account no. : "<<endl;
	cin>>a;
	cout<<"enter balance : "<<endl;
	cin>>b;
	
	ATM ob(a,b);
	
	
	
	
	
	while(true){
		int ch;
		
		cout<<"enter your choice : "<<endl;
		cout<<"1 for deposit "<<endl;
		cout<<"2 for withdraw : "<<endl;
		cout<<"3 for balance : "<<endl;
		cout<<"4 for Exit : "<<endl;
	
	    cin>>ch;
		switch(ch){
		case 1 : ob.deposit();
		         break;
		case 2 : ob.withd();
		         break;
		case 3 : ob.balan();
		         break;
		case 4 : exit(0);
		default : cout<<"invalid input"<<endl;
		         break;		
	}
	}
	return 0;
}
