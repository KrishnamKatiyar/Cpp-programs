#include<iostream>
#include<string>
using namespace std;

class mobile{
	string brand, color;
	int price, width, height;
	public:
		mobile(){
			brand = "oneplus";
			price = 30000;
			color = "black";
			width = 2;
			height = 5;
		}
		void get(){
			cout<<"brand : "<<brand<<endl;
			cout<<"price : "<<price<<endl;
			cout<<"color : "<<color<<endl;
			cout<<"width : "<<width<<endl;
			cout<<"height : "<<height<<endl;
		}
};

int main(){
	mobile ob;
	ob.get();
	
	return 0;
}
