#include<iostream>
using namespace std;
class Area{
	int x,y,z;
	public:
		Area(){
			x = y = z = 0;
		}
		Area(int l, int b, int h){
			x = l;
			y = b;
			z = h;
		}
		void ar(){
			
			int area = 2*((x*y)+(y*z)+(z*x));
			
			cout<<"area = "<<area<<endl;
		}
};

int main(){
	int l,b,h;
	cin>>l>>b>>h;
	
	Area ob(l,b,h);
	ob.ar();
	
	return 0;
}
