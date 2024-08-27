#include<iostream>
using namespace std;
class Area{
	int x,y;
	public:
		Area(){
			x = y = 0;
		}
		void area(int l, int b){
			x=l;
			y=b;
			int area = x*y;
			
			cout<<"area = "<<area<<endl;
		}
};

int main(){
	int l,b;
	cin>>l>>b;
	
	Area ob;
	ob.area(l,b);
	
	return 0;
}
