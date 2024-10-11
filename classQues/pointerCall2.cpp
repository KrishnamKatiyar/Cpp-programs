#include<iostream>
using namespace std;

class A{
	public:
		void Alogic(){
			cout<<"logic A"<<endl;
		}
};
class B : public A{
	public:
		void Blogic(){
			cout<<"logic B"<<endl;
			Alogic();
		}
};

int main(){
	A *ptr;
	B obj;
	
	ptr = &obj;
	
	ptr->Blogic();   // pointer calling
//	obj.Alogic();   // instance calling
	
	return 0;
}
