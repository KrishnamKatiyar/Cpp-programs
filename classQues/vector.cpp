#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &arr){
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
	vector<int>arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	
	display(arr);
	return 0;
}
