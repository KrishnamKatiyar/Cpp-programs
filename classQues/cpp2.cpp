#include<iostream>
using namespace std;
class car{
	private:
		int modelno;
		string name;
		string color;
		string brand;
	public:
		void set_prop(){
			modelno = 1102;
			name = "subra";
			color = "yellow";
			brand = "GNIOT";
		}
		void get_prop(){
			cout<<"Car model no. = "<<modelno<<endl;
			cout<<"Car name = "<<name<<endl;
			cout<<"Car color = "<<color<<endl;
			cout<<"Car brand = "<<brand<<endl;
		}
};

int main(){
	car obj;
	obj.set_prop();
	obj.get_prop();
	return 0;
}
