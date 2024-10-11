#include<stdio.h>
int main()
{
	int arr[10],i,sum=0;
	
	printf("Enter 10 values\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		sum = sum +arr[i];
	}
	
	
	printf("sum %d\n",sum);
	
	
	
	
	return 0;
}
