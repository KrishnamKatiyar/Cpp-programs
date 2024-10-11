//#include<stdio.h>
//
//int main(){
//	static int i=4; 
//	printf("%d ",i--); 
//	if(i)
//      main();
//	
//	return 0;
//}

//#include<stdio.h>
//int fun(int p)
//{
//return ++p;
//}
//int f(int v)
//{
//return ++v;
//}
//int main()
//{
//static int var = 2;
//var = fun(var);
//printf("%d ", var);
//var = fun(var); 
//printf("%d ", var);
//int v = 3;
//v = f(v);
//printf("%d ",v); 
//v = f(v);
//printf("%d ",v);
//}





//
//#include<stdio.h>
//int main()
//{
//int p= 10;
//int s = sizeof(p++);
//printf("%d %d",s,p);
//}


//#include<stdio.h>
//int main(){
//
//int p= 10;
//int s = sizeof(p++);
//printf("%d %d", sizeof(printf("Hello ")),p);
//}

//#include<stdio.h>
//int main(){
//
//int a[5] = {12,6,3,8,9};
//int *p=a;
//if(0-12)
// p++, p--, ++p, ++p, p--;
//printf("*p = %d ",*p);}

//#include<stdio.h>
//int main()
//{
//int a[5] = {12,6,3,8,9};
//int * p = a;
//int * q = &a[5];
//int i = 0;
//for(;i!=3;i++)
//{
//p++;
//q--;
//}
//printf("*p = %d *q = %d", *p, *q);
//
//}

//#include<stdio.h>
//int main()
//{
//   int i, j, k = 0;
//j = 2*3/4+2.0/5+8/5;
//k-=--j;
//for (i=0; i < 5; i++)
//{
//switch(i + k)
//{
//case 1:
//case 2: printf("\n%d", i + k);
//case 3: printf("\n%d", i + k);
//default: printf("\n%d", i + k);
//}
//}
//return 0;
//}

//#include <stdio.h>
//int main(){
//
//printf("%d ", 1);
//goto 11;
//printf("%d ", 2);
//11: goto 12;
//printf("%d ", 3);
//12: printf("%d ", 4);
//
//}

//#include <stdio.h>
//int main()
//{
//printf("%d ", 1);
//goto 11;
//printf("%d", 2);
//}
//void foo()
//{
//11: printf("3", 3);
//}

//#include <stdio.h>
//void main()
//{
//int i = 0;
//if (i == 0)
//{
//goto label;
//}
//label: printf("Hello");
//}

//#include<stdio.h>
//int main(void)
//{
//int a = 1, b = 1, c; if(c=b< 0) a = 5;
//else if(b == 0) a = 7;
//else a = 9;
//printf("%d %d\n", a, c);
//return 0;}

//#include <stdio.h>
//int main(void)
//{
//  printf("%d",'\n'-'\r');
//return 0;
//}

//#include<stdio.h>
//#define x 4+1
//int main()
//{
//
//int i;
//i = x*x*x;
//printf("%d", i);
//return 0;
//}




//#include<stdio.h> 
//int main()
//{
//  int i =10;
//  printf("%d %d",sizeof(i<<2),i);
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//int a = 2;
//if(a== (1,2))
//printf("Hello");
//if(a== 1,2)
//printf("World");
//return 0;
//}

//#include <stdio.h>
//int counter(int i)
//{
//static int count = 0;
//count = count + i;
//return count;
//}
//int main()
//{
//int i, j;
//for (i = 0; i <= 5; i++)
//j = counter(i);
//printf("%d\n", j);
//return 0;
//}

//#include<stdio.h>
//int f(int a)
//{
//a > 20? return (10): return (20);
//}
//int main()
//{
//int f(int);
//int b;
//b = f(20);
//printf("%d\n", b);
//return 0;}
//#include <stdio.h>
//void foo()
//{
//return 1;
//}
//void main()
//{
//int x = 0;
//x = foo();
//printf("%d", x);
//}
//main()
//{
//int i =abc (10); printf("%d", --i);
//}
//int abc (int i)
//{
//return (i++);
//}

//#include <stdio.h>
//void fun1();
//void fun2();
//void main()
//{
//fun1();
//printf("I love India !!\n");
//}
//void fun1()
//{
//printf("hello fun 1\n"); 
//fun2();
//}
//void fun2(){
//
//printf("welcome India !!\n\");
//}

//int main()
//{
//
//void foo(); 
//f();
//  f();
//}
//void foo()
//{
//printf("2");
//}
//void f()
//{
//printf("1"); 
//foo();
//}
//
//#include<stdio.h>
//int main(){
//int arr1[]= {1,2,3,4,5};
//int arr2[5];
//int i;
//arr2 = arr1;
//for(i=4;i>=0;i--)
//printf("%d",arr1[i]*2);
//}
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//int b=15;
//void f1();
//b = f1();
//printf("%d\n", b);
//return 0;
//}
//void f1()
//{
//
//printf("Hello");}
//
//#include<stdio.h>
//main(){
//int x[] = {100, 200, 300};
//printf("%d", *x +1);
//}

//#include<stdio.h>
//int main()
//{
//int i=97;
//switch(i)
//{
//case 97: printf("%d", i); break;
//case 'a': printf("%c",i); break;
//}
//}

#include<stdio.h>
void fun()
{
printf("hj");
}
int main()
{

int fun=10;
printf("%d", fun);
fun();
}
