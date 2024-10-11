#include<stdio.h>
#include<malloc.h>

int main(){
	
	int n,i;
	int *p = (int*)malloc(n*sizeof(int));
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",p++);
	}
	p=p-n;
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	
	return 0;
}
