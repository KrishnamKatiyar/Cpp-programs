#include<iostream>
using namespace std;

class Animal{
	public:
		void speak(){
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

class Naman : public Animal{
	public:
		void speak(){
			Animal::speak();
			cout<<"chiin tapak dam dam \n";  //extending the logic of parent class..			
		}
};

int main(){
	
	Bird ob2;
	ob2.speak();
	
	Dog ob3;
	ob3.speak();
	
	Cat ob4;
	ob4.speak();
	
	Naman ob5;
	ob5.speak();
	
	return 0;
}
