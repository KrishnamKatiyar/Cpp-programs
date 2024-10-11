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
		void at(int i){
			cout<<arr[i]<<endl;
		}
		void size(int i){
			cout<<sizeof(arr[i])<<endl;
		}
		void begin(){
			cout<<&arr[0]<<endl;
		}
		void end(){
			cout<<&arr[N-1]<<endl;
		}
		
		T& operator [](int i){    //using "T&" to assing value , here , T& is refrencial variable
			return arr[i];
		}
};
int main(){
	Array<int,10> intOb;
	intOb.fill(69);	
	
	intOb.size(3);
	intOb.at(4);
	intOb.begin();
	intOb.end();
	
	return 0;
}
