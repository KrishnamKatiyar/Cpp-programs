#include<iostream>
using namespace std;
class Area{
	int r;
	public:
		void set_dim(){
			cout<<"Enter the radius ";
			cin>>r;
			
		}
		float get_area(){
			return 3.14*r*r;
		}
};
int main(){
	Area a;
	a.set_dim();
	cout<<"\nThe Area of the given circle  is "<<a.get_area();
	return 0;
}
