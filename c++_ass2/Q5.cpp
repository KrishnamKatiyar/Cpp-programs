#include<iostream>
#include<string>
using namespace std;
class Student{
	int sid;
	string name,sem,branch;
	public:
		void get(){
			cout<<"Enter the student id ";
			cin>>sid;
			cin.ignore();
			cout<<"\nEnter the student name ";
			getline(cin,name);
			cout<<"\nEnter the student branch ";
			getline(cin,branch);
			cout<<"\nEnter the student sem ";
			getline(cin,sem);
		}
		void print(){
			cout<<"\nStudent id "<<sid;
			cout<<"\nStudent name "<<name;
			cout<<"\nStudent sem "<<sem;
			cout<<"\nStudent branch "<<branch;
		}
};
int main(){
	Student s;
	s.get();
	s.print();
	return 0;
}
