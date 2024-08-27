#include<iostream>
using namespace std;
class A{
	int acc_no;
	float balance;
	public:
		void set(){
			cout<<"Account No.\n";
			cin>>acc_no;
			cout<<"enter the balance";
			cin>>balance;
		}
		void withdrawl(){
			float x;
			cout<<"\nEnter the amount you want to withdraw";
			cin>>x;
			if(x>balance)
			cout<<"\n Not Enough balance";
			else{
				balance-=x;
				cout<<"Reamaing Balance = "<<balance;
			}
		}
};
int main(){
	A obj;
	obj.set();
	obj.withdrawl();
	return 0;
}
