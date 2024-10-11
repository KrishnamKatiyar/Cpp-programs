#include<iostream>
//using namespace std;
class ADD
{
		int a,b,c;
	public:
		void input()
		{
			std::cout<<"Enter two no ";
			std::cin>>a>>b;
		}
		void process()
		{
			c=a+b;
		}
		void output()
		{
			std::cout<<"Result = "<<c;
		}
};
int main()
{
	ADD obj;  // obj is object/instance of class A
	obj.input();
	obj.process();
	obj.output();
	return 0;
}
