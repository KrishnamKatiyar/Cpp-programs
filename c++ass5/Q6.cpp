#include<iostream>
using namespace std;

class Student{
	int a;
	public:
		Student(){
		}
		Student(int marks):a(marks){	
		}
		void display(){
			cout<<"marks = "<<a<<endl;
		}
		Student operator+(Student& other){
			return Student(a + other.a);
		}
};
int main(){
	Student s1(10), s2(20), s3;
	cout<<"marks of student 1: "<<endl;
	s1.display();
	
	cout<<"marks of student 2: "<<endl;
	s2.display();
	
	s3 = s1+s2;
	
	cout<<"their sum : "<<endl;
	s3.display();
	
	return 0;
	
}
