#include<iostream>
using namespace std;
class student{
	private:
		float marks;
	protected:
		char name[30];
	public:
		int sid;
	void set(){
		cout<<"enter student id : ";
		cin>>sid;
		cout<<"enter student name : ";
		fflush(stdin);
		gets(name);
		cout<<"enter marks : ";
		cin>>marks;
	}
	void get(){
		cout<<sid<<endl;
		cout<<name<<endl;
		cout<<marks<<endl;
	}
};
int main(){
	student s[3];
	
	for(int i=0;i<3;i++){
		s[i].set();
	}
	for(int i=0;i<3;i++){
		s[i].get();
	}
	
	return 0;
}
