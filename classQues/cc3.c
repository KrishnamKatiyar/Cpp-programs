#include<stdio.h>
int add(int,int);
int sub(int,int);
int main(){
	int (*p)(int,int);
	int a,b,c;
	printf("Enter 2 num : ");
	scanf("%d%d",&a,&b);
	p = &add;
	c = p(a,b);
	printf("Add - %d\n",c);
	p = &sub;
	c = p(a,b);
	printf("Sub - %d\n",c);
	
	return 0;
}

int add(int x,int y){
	return x+y;
}
int sub(int x,int y){
	return x-y;
}

