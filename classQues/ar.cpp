#include<iostream>
#include<math.h>
using namespace std;

int area(int a){
	int area = a*a;
	
	return area;
}
int area(int a, int b){
	int area = a*b;
	
	return area;
}
int area(int a, int b, int c){
	int s=(a+b+c)/2;
	
	float ar = sqrt(s*(s-a)*(s-b)*(s-c));
	
	return ar;
}

int main(){
	cout<<area(4)<<endl;
	cout<<area(4,5)<<endl;
	cout<<area(5,6,7)<<endl;
	
	return 0;
}
