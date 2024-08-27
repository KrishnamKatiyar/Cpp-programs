#include<iostream>
using namespace std;

class Student{
	int a,b,c;
	public:
		Student(){
		}
		Student(int math,int science,int english):a(math),b(science),c(english){	
		}
		void display(){
			cout<<"math = "<<a<<" science = "<<b<<" english = "<<c<<endl;
		}
		Student operator*(Student s){
			return Student(a*s.a, b*s.b, c*s.c);
		}
};
int main(){
	Student s1(10,20,30), s2(2,3,4), s3;
	cout<<"marks of student 1 : \n";
	s1.display();
	
	cout<<"marks of student 2 : \n";
	s2.display();
	
	s3 = s1*s2;
	
	cout<<"multiply of marks : \n";
	s3.display();
	
	return 0;
	
}
