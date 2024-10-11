#include<iostream>
using namespace std;
class student{
	private:
		int id;
		string name;
		string city;
	public:	
	void set(int i,string nm, string ct){
		id=i;
		name=nm;
		city=ct;
	}
	void get(){
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<city<<endl;
	}
};
int main(){
	student s1,s2;
	s1.set(101,"a a","i i");
	s1.get();
	s2.set(101,"b b","j j");
	s2.get();
	
	return 0;
}
