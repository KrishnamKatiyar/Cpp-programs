#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Enter two num. : "<<endl;
	cin>>x>>y;
	try{
		if(y==0){
			throw "divide by zero error";
		}
		z = x/y;
		cout<<"result = "<<z<<endl;
	}
	catch(const char *e){
		cout<<"Exeption occured : "<<e<<endl;
	}
	cout<<"\n\nThnaks!!"<<endl;
	
	return 0;
}
