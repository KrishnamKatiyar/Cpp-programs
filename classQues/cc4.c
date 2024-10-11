#include<stdio.h>
int main(){
	int a=11, b=22, c=33,i;
	int *p1=&a, *p2=&b, *p3=&c;
	
	int (**p[3])= {&p1,&p2,&p3};
	
	for(i=0;i<3;i++){
		printf("%d ",**p[i]);
	}
	
	return 0;
}
