#include<iostream>
using namespace std;

template <typename T, int N>
class Array{
	private:
		T arr[N];
	public:
		void fill(T a){
			for(int i=0;i<N;i++){
	    		arr[i] = a;
			}
		}
	    void show(){
	    	for(int i=0;i<N;i++){
	    		cout<<arr[i]<<endl;
			}
		}
		T& operator [](int i){    //using "T&" to assing value , here , T& is refrencial variable
			return arr[i];
		}
};
int main(){
	Array<int,10> intOb;
	intOb.fill(69);	
	intOb.show();
	cout<<"\n\n";
	cout<<intOb[4];
	
	intOb[3] = 40;
	cout<<"\n\n";
	cout<<intOb[3];
	
	return 0;
}
