#include<iostream>
#include<exception>
#include<windows.h>
using namespace std;

class OverSpeedException : public exception{
	int speed;
	public:
		const char* what(){
			return "Over speed exception raised : check out car speed";
		}
		OverSpeedException(int speed){
			this->speed = speed;
		}
		void getspeed(){
			cout<<"Your car speed is : "<<speed<<endl;
		}
		
};
class Car{
	int speed;
	public:
		Car(){
			speed = 0;
			cout<<"Car speed is "<<speed<<endl;
		}
		void runcar(){
			for( ; ; ){
				speed+=10;
				cout<<"Car speed is "<<speed<<endl;
				Sleep(1500);
				if(speed>=120){
					throw OverSpeedException(speed);
				}
			
			}
};

int main(){
	Car c1;
	
	try{
		c1.runcar();
	}
	catch(OverSpeedException &err){
		cout<<err.what()<<endl;
		err.getspeed();
	}
	cout<<"Don't Drive and Drink !!\n";
	cout<<"Happy Journey \n";
	
	return 0;
}
