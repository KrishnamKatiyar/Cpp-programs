#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;
int main(){
	string str = " at GNIOT College \n";
	cout<<"Welcome Dear ------\n";
	try{
		cout<<string("Be creative with us........\n").substr(32);
	}
	catch(out_of_range& e){
		
	}
	cout<<string("Train your Brain \n");
	cout<<str;
	cout<<"thanks!! bye bye";
	
	return 0;
}
