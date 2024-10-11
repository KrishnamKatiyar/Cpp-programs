#include<iostream>
#include<exception>
#include<windows.h>
using namespace std;

class OverAgeException : public exception{
	int age;
	public:
		const char* what(){
			return "Over age exception raised : not valid for job - moye moye";
		}
		OverAgeException(int age){
			this->age = age;
		}
		void getage(){
			cout<<"Age is : "<<age<<endl;
		}
		
};
class Age{
	int age;
	public:
		Age(){
			age = 0;
			cout<<"Age is "<<age<<endl;
		}
		void age(){
			for( ; ; ){
				age+=1;
				cout<<"age is "<<age<<endl;
				Sleep(1500);
				if(age>=120){
					throw OverAgeException(age);
				}
			
			}
};

int main(){
	Age a1;
	
	try{
		a1.age();
	}
	catch(OverAgeException &err){
		cout<<err.what()<<endl;
		err.getage();
	}
	cout<<"Don't Drive and Drink !!\n";
	cout<<"Happy Journey \n";
	
	return 0;
}
