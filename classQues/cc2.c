#include<stdio.h>
void fun1();
void fun2();
void fun3();
void fun4();
void fun5();
int main(){
	
	void (*p[5])()={&fun1,&fun2,&fun3,&fun4,&fun5};
	int i;
	for(i=0;i<5;i++){
		p[i]();
	}
	return 0;
}

void fun1(){
	printf("fn1\n");
}
void fun2(){
	printf("fn2\n");
}
void fun3(){
	printf("fn3\n");
}
void fun4(){
	printf("fn4\n");
}
void fun5(){
	printf("fn5\n");
}
