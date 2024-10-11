#include<stdio.h>

void func(int arr[],int n){
	int min = 1000000, max = -1,i;
	for(i=0;i<n;i++){
		if(min>arr[i])
		 min = arr[i];
		if(max<arr[i])
		 max = arr[i];
	} 
	printf("Max element is %d and Min element is %d ",max,min);
}

int main(){
	int arr[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	func(arr,10);
	return 0;
}
