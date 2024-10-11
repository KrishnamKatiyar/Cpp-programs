//#include<stdio.h>
//int main() {
//typedef int *i;
//int j = 10;
//i *a = &j;
//printf("%d", **a);
//return 0;
//}

//#include <stdio.h>
//int main(){
//int short=10;
//printf("%d", short+20);
//return 0;
//}

//#include <stdio.h>
//int main(){
//int x = 1, y = 2;
//printf("%d", x, y);
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//int a[] [3] = {1, 2, 3, 4, 5, 6};
//int (*ptr) [3] = a;
//printf("%d %d", (*ptr) [1], (*ptr) [2]);
//++ptr;
//printf("%d %dn", (*ptr) [1], (*ptr) [2]);
//return 0;
//}

//int main()
//{
//char *p1 = "GOAT";
//char *p2;
//p2 = p1;
//printf("%s", p2);
//}

//#include <stdio.h> 
//int fun(char *str1) {
//char *str2 = str1; 
//while(*++str1); 
//return (str1-str2);}
//int main()
//{
//char *str = "GeeksQuiz"; 
//printf("%d", fun(str)); 
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//int a[] [3] = {1, 2, 3, 4, 5, 6};
//int (*ptr) [3] = a;
//printf("%d %d", (*ptr) [1], (*ptr) [2]);
//++ptr;
//printf("%d %dn", (*ptr) [1], (*ptr) [2]);
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//int a=0,b=1, c=1,d;
//d=a++ && ++b && ++c;
//printf("a=%d b=%d c=%d d=%d",a,b,c,d);
//return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//const int i=0;
//printf("%d\n", i++);
//return 0;
//}

//int main()
//{
//FILE* pFile;
//char c;
//pFile = fopen("sample.txt", "wt");
//for (c = 'A'; c <= 'E'; c++) { 
//fputc(c, pFile);
//}
//fclose(pFile);
//return 0;
//}

//#include <stdio.h> 
//void main() {
//int arr[]={6,12,18,24}; int x=0;
//x=arr[1]+(arr[1]=2);
//printf("%d",x);
//}

//int main()
//{
//char str[]={'g', '1','0', 'b', 'e'};
//printf("%s", str);
//return 0;
//}

//#include <stdio.h>
//int fun()
//{
//static int num = 16;
//return num--;
//}
//int main()
//{ for(fun(); fun(); fun()) printf("%d", fun()); return 0; }

//#include <stdio.h>
//int fun(int arr[]) {
//arr = arr+1;
//printf("%d", arr[0]);
//}
//int main(void) {
//int arr[2] = {10, 20};
//fun(arr);
//printf("%d", arr[0]);
//return 0;
//}

//#include<stdio.h>
//int x = 5;
//int main()
//{
//int arr[x];
//static int x = 0;
//x = sizeof(arr);
//printf("%d", x<<2);
//return 0;
//}

//#include<stdio.h> 
//int main() {
//typedef static int *i;
//int j;
//i a = &j;
//printf("%d", *a);
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//int *p = (int *)malloc(sizeof(int));
//p= NULL;
//free(p);
//}

//#include<stdio.h>
//enum day
//{
//a, b, c=5, d, e
//};
//main()
//{
//printf("Enter the value for a");
//scanf("%d",a);
//printf("%d",a);
//}

#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//int i;
//int *ptr = (int*) malloc(5* sizeof(int));
//for (i=0; i<5; i++) {
//	*(ptr + i) = i;
//}
//printf("%d ", *ptr++);
//printf("%d ", (*ptr)++);
//printf("%d ", *ptr);
//printf("%d ", *++ptr);
//printf("%d", ++*ptr);
//}

//#include<stdio.h>
//struct st {
//int x;
//static int y;
//};
//int main()
//{
//printf("%d", sizeof(struct st));
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//int x = 5;
//int const ptr = &x; *
//++(*ptr);
//printf("%d", x);
//return 0;
//}

//#include <stdio.h> 
//int fun() {
//puts(" Hello ");
//return 10;
//}
//int main()
//{
//printf("%d", sizeof(fun())); return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//char a[] = {'G', 'E', 'E', 'K', 'S', 'Q', 'U', 'I', 'Z'};
//char b[] = "QUIZ";
//char c[] = "GEEKS";
//char d[] = "1234"; int l = strlen(a);
//int o = printf("%d", sizeof((sizeof(1)+(c[5]+d[0]+a[1]+b[2]))));
//printf("%c", a[0]);
//return 0;
//}

//#include <stdio.h>
//char *c[] = {"GeksQuiz", "MCQ", "TEST", "QUIZ"};
//char **cp[] = {c+3, c+2, c+1, c};
//char ***cpp = cp;
//int main()
//{
//printf("%s", **++cpp);
//printf("%s", *--*++cpp+3); 
//printf("%s", *cpp[-2]+3);
//printf("%s", cpp[-1] [-1]+1);
//return 0;
//}

#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//void fun (char** str_ref)
//{
//str_ref++;
//}
//int main()
//{
//char *str = (void *)malloc(100*sizeof(char)); strcpy(str, "HelloWorld");
//fun(&str);
//puts(str);
//free(str);
//return 0;
//}

//#include <stdio.h> 
//int main() {
//char arr[] = "HelloWorld"; printf("%s", ?);
//return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//void fun(int *a)
//{
//	a = (int*)malloc(sizeof(int));
//}
//
//int main()
//{
//int *p;
//fun(p);
//*p = 6;
//printf("%dn", *p);
//return(0);
//}

//void main()
//{
//int k = 7;
//int m = 8;
//int z=k<m?k=m: m++;
//printf("%d", z);
//}

//#include <stdio.h>
//int main()
//{
//char str[] = "HelloWorld";
//printf("%s %s %s", &str[5], &5 [str], str+5); printf("%c%c%c", *(str+6), str[6], 6[str]);
//return 0;
//}

//#include<stdio.h>
//#define f(g,g2) g##g2
//int main()
//{
////int var12 = 100;
////printf("%d", f(var, 12));
//{
//	char p[20];
//char *s = "string";
//int length = strlen(s);
//int i;
//for (i = 0; i < length; i++)
//p[i] = s[length - 1];
//printf("%s", p);
//}
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//char c[] = "JULY2022"; 
//char *p =c;
//printf("%s", p+p[3]- p[1]);
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//int x = 5;
//int * const ptr = &x;
//++(*ptr);
//printf("%d", x);
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//int a[5] = {1,2,3,4,5};
//int *ptr = (int*)(&a+1);
//printf("%d %d", *(a+1), *(ptr-1));
//return 0;
//}

//#include<stdio.h>
//int main()
//{
// printf("Hello""Bye"); 
// return 0;
//}

//#include<stdio.h>
//enum day
//{
//a, b, c=5
//};
//int main()
//{
//enum day s;
//b=10;
//printf("%d",b);
//}

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%d\n", rand() % 1000);
return 0;
}


