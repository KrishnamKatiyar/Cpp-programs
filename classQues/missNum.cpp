#include<iostream>
#include<vector>
using namespace std;

void missingNumber(int n, vector<int> &arr){
	int sum=n*(n+1);
	sum = sum/2;
	for(int i=0;i<arr.size();i++){
		sum-=arr[i];
	}
	cout<<sum;
}

int main()
{
	int n;
	vector<int>arr={1,2,3,5};
	n=5;
	missingNumber(n,arr);
	return 0;
}
