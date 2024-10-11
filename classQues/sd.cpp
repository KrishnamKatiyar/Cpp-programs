#include<iostream>
using namespace std;
class A{
	public:
		int nsd;
		static int sd;
	public:
		void nsm(){
			cout<<"non static method!!\n";
			sd=40;
		}
		static void sm(){
			cout<<"static method!!\n";
			sd=23;
		}
};
int A::sd=12;
int main(){
	A ob;
	ob.nsm();
	ob.sm();
	return 0;
}
