#include<iostream>
using namespace std;

class volCube{
	int a;
	public:
		volCube(){
			a=0;
		}
		volCube(int x){
			a=x;
		}
		void volume(){
			cout<<"volume of cube : "<<a*a*a<<endl;
		}
};
int main(){
	int x;
	cin>>x;
	volCube ob(x);
	ob.volume();
	
	return 0;
}
