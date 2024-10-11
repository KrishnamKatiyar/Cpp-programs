// inheritance

#include<iostream>

using namespace std;

class Daddy{
	private:
		int diary;
	protected:
		int phone;
	public:
		int cycle;
};
class Baby:public Daddy{
	public:
		void Baby_method(){
			// diary = 10; // it is private
			phone = 100;
			cycle = 200;
			//cout<<"diary = "<<diary<<endl;
			cout<<"phone = "<<phone<<endl;
			cout<<"cycle = "<<cycle<<endl;
		}
};

//class neighbour:protected Daddy{
//	public:
//		void get_data(){
//			phone = 20;
//			cycle = 10;
//			cout<<"N_phone = "<<phone<<endl;
//			cout<<"N_cycle = "<<cycle<<endl;
//		}
//};

class neighbour:protected Baby{
	public:
		void get_data(){
			phone = 20;
			cycle = 10;
			cout<<"N_phone = "<<phone<<endl;
			cout<<"N_cycle = "<<cycle<<endl;
		}
};
int main(){
	Baby ob;
	ob.Baby_method();
	
	neighbour ob2;
	ob2.get_data();
	
	
	return 0;
}
