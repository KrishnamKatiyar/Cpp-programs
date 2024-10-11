#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void speak(){
			cout<<"I can speak ";
		}
};
class Bird : public Animal{
	public:
		void speak(){
			Animal::speak();
			cout<<"chi chi \n";  //extending the logic of parent class..			
		}
};
class Dog : public Animal{
	public:
		void speak(){
			Animal::speak();
			cout<<"woof woof \n";  //extending the logic of parent class..			
		}
};

class Cat : public Animal{
	public:
		void speak(){
			Animal::speak();
			cout<<"meww \n";  //extending the logic of parent class..			
		}
};



int main(){
	Animal *ptr;
	
	Animal ob1;
	ptr = &ob1;
	
	Bird ob2;
	ptr = &ob2;
	ptr->speak();
	
	Dog ob3;
	ptr = &ob3;
	ptr->speak();
	
	Cat ob4;
	ptr = &ob4;
	ptr->speak();

	
	return 0;
}
