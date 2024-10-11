//#include <stdio.h>
//void my_toUpper(char* str, int index) {
//*(str + index) &= ~32;
//}
//int main()
//{
//char* arr = "helloworld";
//my_toUpper(arr, 0);
//my_toUpper(arr, 5);
//printf("%s", arr);
//return 0;
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
////char c[] = "JULY2022"; 
////char *p =c;
////printf("%s", p+p[3] - p[1]);
//char p[20];
//char *s = "string";
//int length = strlen(s);
//int i;
//for (i = 0; i < length; i++)
//  p[i] = s[length - 1];
//printf("%s", p);
//return 0;
//}

//#include<stdio.h>
//struct st {
//    int x;
//    static int y;
//};
//int main()
//{
//printf("%d", sizeof(struct st));
//return 0;
//}

//#include<stdio.h>
//int main(){ printf("Hello""Bye"); return 0;
//}

//#include <stdio.h>
//int main(){
//int short=10;
//printf("%d", short+20);
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
//#define PRINT(i, limit) do
//                    {
//                        if (i++ < limit)
//                           { 
//						        printf("HelloWorld"); 
//								continue;
//							}
//					}while(1)
//int main()
//{
//PRINT(0, 3);
//return 0;
//}


//#include <stdio.h>
//void f(char**);
//int main()
//{
//char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" }; 
//f(argv);
//return 0;
//}
//void f(char **p)
//{
//char *t;
//t = (p += sizeof(int)) [-1];
//printf("%sn", t);
//}

//#include<stdio.h> 
//int main() {
//typedef static int *i;
//int j;
//i a = &j;
//printf("%d", *a);
//return 0;
//}

//#include <stdio.h> 
//int main() {
//char arr[] = "HelloWorld"; 
//printf("%s", ?);
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
//char str[] = "HelloWorld";
//printf("%s %s %s", &str[5], &5 [str], str+5); printf("%c%c%c", *(str+6), str[6], 6[str]);
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//int i = 0;
//while (i <= 4)
//{
//printf("%d", i);
//if (i > 3)
//goto inside_foo;
//i++;
//}
//getchar();
//return 0;
//}
//void foo()
//{
//inside_foo:
//printf("PP");
//}

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

//#include <stdio.h>
//int main()
//{
//int i, j, k = 0;
//j = 2 * 3/4+2.0/5+ 8/5;
//k -= --j;
//for (i = 0; i < 5; i++)
//{
//switch(i + k)
//{
//case 1:
//case 2: printf("n%d", i + k);
//case 3: printf("n%d", i + k);
//default: printf("n%d", i + k);
//}
//}
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

//#include<stdio.h>
//int main() {
////typedef int *i;
////int j = 10;
////i *a = &j;
////printf("%d", **a);
////return 0;
//
//unsigned int foo(unsigned int n, unsigned int r)
//{
//if (n > 0) return (n%r + foo (n/r, r));
//else return 0;

//#include <stdio.h>
//int main(){
//int x = 1, y = 2;
//printf("%d", x, y);
//return 0;
//}
//
//[PI] int * g (void)
//{
//int x= 10;
//return (&x);
//}
//[P2] int * g (void)
//int * px;
//*px= 10;
//return px;
//}
//[P3] int *g (void)
//{
//int *px;
//px = (int*) malloc (sizeof(int)); *px= 10;
//return px;
//}

#include <stdio.h>

int fun() {
    static int num = 16;
    return num--;
}

int main() {
    for (fun(); fun(); fun()) 
        printf("%d", fun());
    return 0;
}




















