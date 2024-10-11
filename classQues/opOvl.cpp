#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(){
		}
		A(int x, int y){
			a=x;
			b=y;
		}
		void dis()  // vpid dis(A *this)
		{
			cout<<" a = "<<a<<endl;   // cout<<this->a
			cout<<" b = "<<b<<endl;
		}
//		A add(A &temp2)  // A add(A *this , A &temp)
//		{
//			A temp3;
//			temp3.a = this->a + temp2.a;
//			temp3.b = this->b + temp2.b;   // we can also exlcude " this-> " 
//			
//			return temp3;
//		}
		A operator+(A &temp2)  // A add(A *this , A &temp)
		{
			A temp3;
			temp3.a = this->a + temp2.a;
			temp3.b = this->b + temp2.b;   // we can also exlcude " this-> " 
			
			return temp3;
		}
		
		A operator-(A &temp2)  // A add(A *this , A &temp)
		{
			A temp3;
			temp3.a = this->a - temp2.a;
			temp3.b = this->b - temp2.b;   // we can also exlcude " this-> " 
			
			return temp3;
		}
		
		bool operator>(A &temp2)  // A add(A *this , A &temp)
		{
			if(this->a > temp2.a && this->b > temp2.b){
				return 1;
			} 
			else{
				return 0;
			}
		}
		
		A operator++()  
		{
			++a;
			++b;
		}
		A operator++(int)  
		{
			a++;
			b++;
		}
};
int main(){
	A ob1(10,20);

	A ob2(30,40);

	A ob3(0,0);
	


	ob1.dis();
	ob2.dis();
	ob3.dis();
	
//	ob3 = ob1.add(ob2);   //ob3 = A::add(&ob1 + ob2)   
//	ob3.dis();
	
	ob3 = ob1 + ob2;  // user defined type // ob3 = ob1.operator+(ob2)
	ob3.dis();     // a=40  b=60
	
	
	ob3 = ob1 - ob2;  // user defined type // ob3 = ob1.operator+(ob2)
	ob3.dis();
	
	if(ob1 > ob2){
		ob1.dis();
	}
	else{
		ob2.dis();
	}
	
	++ob1;
	ob1.dis();
	
	ob2++;
	ob2.dis();
		
	return 0;
}
