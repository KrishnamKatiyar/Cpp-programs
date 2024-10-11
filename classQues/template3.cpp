#include<iostream>
using namespace std;

template <typename T>
class Gen{
	private:
		T age,weight;
	public:
		Gen(){
		}
		Gen(T a,T b){
			age = a;
			weight = b;
		}
	    void show(){
	    	cout<<"I am "<<age<<" year old and weight is "<<weight;
		}
};
int main(){
	Gen<int> ob(10,35);
	ob.show();
	
	return 0;
}
