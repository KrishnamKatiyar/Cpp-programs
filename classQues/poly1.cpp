#include<iostream>
using namespace std;

class A{
	public:
		void Alogic(){
			cout<<"logic A"<<endl;
		}
};
class B{
	public:
		void Blogic(){
			cout<<"logic B"<<endl;
		}
};

int main(){
	A ob1;
	ob1.Alogic();
	
	B ob2;
	ob2.Blogic();
	
	return 0;
}
