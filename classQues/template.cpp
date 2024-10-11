#include<iostream>
using namespace std;

template <typename T>
T great (T a, T b){
	return a+b;
}
int main(){
	cout<<great('a','b');
	return 0;
}
