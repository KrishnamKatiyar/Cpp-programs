#include<iostream>
using namespace std;
class A{
	int age,pincode;
	string name,city;
	public:
	void set(){
		cout<<"Enter the age\n";
		cin>>age;
		cout<<"\nEnter the name\n";
		cin>>name;
		cout<<"\nEnter the city\n";
		cin>>city;
		cout<<"\nEnter the pincode\n";
		cin>>pincode;
	}
	void display(){
		cout<<"Name = "<<name<<"\nAge = "<<age<<"\nCity = "<<city<<"\nPincode = "<<pincode;
	}
};
int main(){
	A obj;
	obj.set();
	obj.display();
}
