#include<iostream>
using namespace std;
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	int sum =0;
	for(int i=0;i<5;i++){
		sum+=arr[i];
	}
	cout<<"Average temprature is = "<<sum/5;
	return 0;
}
