#include<stdio.h>
int main()
{
	int arr[10],i,n1=0,n2=0;
	
	printf("Enter 10 values\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[10]);
	}
	
	
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
			n1++;
		} else{
			n2++;
		}
	}
	
	printf("Even - %d\n",n1);
	printf("Odd - %d\n",n2);
	
	
	
	
	return 0;
}
