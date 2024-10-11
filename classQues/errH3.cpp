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
			throw runtime_error("divide by zero error");
		}
		z = x/y;
		cout<<"result = "<<z<<endl;
	}
	catch(runtime_error &e){
		cout<<"Exeption occured : "<<endl;
		cout<<e.what();
	}
	cout<<"\n\nThnaks!!"<<endl;
	
	return 0;
}
