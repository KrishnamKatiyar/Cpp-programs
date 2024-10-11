#include<iostream>
using namespace std;

template <typename T , typename T2>
T great (T a, T2 b){
	return a+b;
}
int main(){
	cout<<great<char,int>('a',1);
	return 0;
}
