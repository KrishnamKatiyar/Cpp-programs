#include<stdio.h>

int main(){
	int i;
	int arr1[5]={0},arr2[5]={1},arr3[5]={2},arr4[5]={3},arr5[5]={4};
	int *p[5];
	p[0]=&arr1[0];
	p[1]=&arr2[0];
	p[2]=&arr3[0];
	p[3]=&arr4[0];
	p[4]=&arr5[0];
	
	for(i=0;i<5;i++){
		printf("%u\n",p[i]);
	}
	
	for(i=0;i<5;i++){
		printf("%d\n",*(p[0+i]));
	}
	
	return 0;
}
