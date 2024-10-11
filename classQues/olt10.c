//#include <stdio.h>
//(sizeof double = 8, float = 4, void = 1) 
//#define PI 3.14
//int main()
//{
//printf("%d", sizeof(PI));
//}

//#include<stdio.h> 
//main()
//{
//int a; a=f1(10); printf("%d",a);
//}
//f1(int b)
//{
//if (b==0)
//return 0;
//else
//{
//printf("a"); f1(b--);
//}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//char *p;
//*p = (char)calloc(10);
//strcpy(p, "HELLO");
//printf("%s", p);
//free(p);
//return 0;
//}

//#include <stdio.h>
//#include <math.h>
//void main()
//{
//int k = sqrt(-4);
//printf("%d\n", k);
//}

//main()
//{
//unsigned a=10;
//long unsigned b=51;
//printf("%lu%u", a,b);
//}

//#include <stdio.h>
//#define a 2
//main()
//{
//int r;
//#define a 5
//r=a*2;
//printf("%d",r);
//}

//#include<stdio.h> 
//int main() {
//printf("Hello"); main(); return 0;
//}

//#include <stdio.h> 
//struct p {
//struct p *next;
//int x;
//};
//int main() {
//struct p *p1 =calloc(1, sizeof(struct p)); p1->x = 1;
//p1->next = calloc(1, sizeof(struct p));
//printf("%d\n", p1->next->x);
//return 0;
//}

//#include<stdio.h>
//enum colour
//{
//blue, red, yellow
//};
//main()
//{
//enum colour c;
//c=yellow;
//printf("%d",c);
//}

//#include <stdio.h> 
//void inline f1(char b) {
//printf ("%d\n",b);
//}
//int main()
//{
//f1('a');
//return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//char *p = calloc(100, 1); p = "welcome";
//printf("%s\n", p);
//}

//#include<stdio.h>
//int main()
//{
//typedef union a
//{
//int i;
//char ch[2];
//}hello;
//hello u;
//u.ch[0] =3;
//u.ch[1] = 2;
//printf("%d %d", u.ch[0], u.ch[1]);
//return 0;
//}

//#include<stdio.h> 
//int main() {
//signed char ch= 'a'; printf("%u", ch);
//return 0;
//}

//#include<stdio.h>
//#include<string.h>
//typedef struct employee {
//char name [50];
//int salary;
//} e1;
//void main()
//{
//printf("Enter Employee name"); 
//scanf("%s", e1.name);
//printf("\n%s", e1.name);
//}

//#include<stdio.h>
//main()
//{
//int n,i;
//n=f(6);
//printf("%d",n);
//}
//f(int x)
//{
//if(x==2)
//return 2;
//else
//{
//printf("+"); f(x-1);
//}
//}


//#include<stdio.h>
//#include<stdlib.h>
//main()
//{
//int *p;
//p=(int*)calloc(3,sizeof(int));
//printf("Enter first number\n");
//scanf("%d",p);
//printf("Enter second number\n");
//scanf("%d",p+2);
//printf("%d%d", *p,*(p+2));
//free(p);
//}

//#include <stdlib.h>
//#include <stdio.h>
//int main(void)
//{
//int* p = NULL;
//struct S *s = NULL;
//void (*f) (int, double) = NULL;
//char *ptr = malloc(15);
//if (ptr == NULL) printf("Out of memory");
//free(ptr);
//}

//#include <stddef.h>
//int main(void)
//{
//int num[10];
//int *p1=&num[14], *p2=&num[19];
//ptrdiff_t a = p1-p2;
//printf("%d", a);
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//int i = 90;
//printf("%f\n", sin(i));
//return 0;
//}

//#include <stdio.h>
//union temp
//{
//char a;
//char b;
//int c;
//}t;
//int main()
//{
//printf("%d", sizeof(t));
//return 0;
//}

//#include<stdio.h> 
//enum hi{a,b,c}; 
//enum hello{c,d,e}; 
//main() {
//enum hi h;
//h=b;
//printf("%d",h);
//return 0;
//}

//#include<stdio.h> 
//void main() {
//#ifndef max 
//printf("hello"); 
//#endif
//printf("hi");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//srand(9000);
//printf("%d\n", rand());
//return 0;
//}

#include<stdio.h>
#define max 100 
void main() {
#if(max%10) 
printf("hello");
#endif
printf("india");
}












