#include<iostream>
using namespace std;
class Area{
	int l,b;
	public:
		void set_dim(){
			cout<<"Enter the length ";
			cin>>l;
			cout<<"\nEnter the bredth ";
			cin>>b;
		}
		int get_area(){
			return l*b;	
		}
};
int main(){
	Area a;
	a.set_dim();
	cout<<"\nThe Area of the given rectangle is "<<a.get_area();
	return 0;
}
