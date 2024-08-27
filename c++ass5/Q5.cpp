#include<iostream>
using namespace std;

class Student{
	int a;
	public:
		Student(){
		}
		Student(int marks):a(marks){	
		}
		bool operator==(Student& other){
			return a==other.a;
		}
};
int main(){
	Student s1(10), s2(20), s3(10);
	if(s1==s2){
		cout<<"same marks"<<endl;
	}
	else{
		cout<<"not same marks"<<endl;
	}
	if(s1==s3){
		cout<<"same marks"<<endl;
	}
	else{
		cout<<"not same marks"<<endl;
	}
	
	return 0;
	
}
