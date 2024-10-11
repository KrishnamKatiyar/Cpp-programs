#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
	cout<<"Main Method.....\n";
	try{
		cout<<"Outer try....\n";
		try{
			cout<<"Inner try....\n";
			throw "some exception";
		}
		catch(const char *err){
			cout<<"Some Exception inner block"<<err<<endl;
			throw runtime_error("Hello");
		}
	}
	catch(const *err){
		cout<<"Some Exception outer block"<<err<<endl;
	}
	catch(...){
		cout<<"Unexpected error\n";
	}
	cout<<"Thanks Bye Bye\n";
	
	return 0;
}
