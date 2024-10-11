#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int>arr={2,3,5,6,4,9,8};
	int n=arr.size();
	vector<int> ans;
	int maxi=arr[n-1];
	ans.push_back(maxi);
	
	for(int i=n-2;i>=0;i--){
		if(maxi<arr[i]){
			maxi=arr[i];
			ans.push_back(maxi);
		}
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
