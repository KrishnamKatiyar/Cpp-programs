#include<iostream>
using namespace std;

template <typename T>
class Array{
	private:
		T arr[5];
	public:
		void fill(T a){
			for(int i=0;i<5;i++){
	    		arr[i] = a;
			}
		}
	    void show(){
	    	for(int i=0;i<5;i++){
	    		cout<<arr[i]<<endl;
			}
		}
};
int main(){
	Array<int> intOb;
	intOb.fill(69);	
	intOb.show();
	
	Array<char> charOb;
	charOb.fill('A');	
	charOb.show();
	
	Array<float> floatOb;
	floatOb.fill(69.69);	
	floatOb.show();
	
	return 0;
}
