#include<iostream>
using namespace std;
class student{
	public:
		int sid;
		string name;
		float marks;
};
int main(){
	student s1,s2;
	s1.sid=101;
	s1.name="a";
	s1.marks=12.2f;
	s2.sid=102;
	s2.name="b";
	s2.marks=15;
	
	cout<<"name : "<<s1.name<<endl;
	cout<<"id : "<<s1.sid<<endl;
	cout<<"marks : "<<s1.marks<<endl;
	cout<<"name : "<<s2.name<<endl;
	cout<<"id : "<<s2.sid<<endl;
	cout<<"marks : "<<s2.marks<<endl;
	
	return 0;
}
