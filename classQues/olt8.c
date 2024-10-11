//#include <stdio.h>
//struct p
//{
//int k;
//char c;
//float f;
//};
//int p =10;
//int main()
//{
//struct p x = {1, 97};
//printf("%f %d\n", x.f, p);
//}

//#include <stdio.h>
//struct point
//{
//int x;
//int y;
//};
//void foo(struct point*);
//int main()
//{
//struct point p1[]  = {1, 2, 3, 4};
//foo(p1);
//}
//void foo(struct point p[])
//{
//printf("%d\n", p[1].x);
//}

//#include <stdio.h>
//struct p {
//int x;
//char y;
//};
//typedef struct p* q*;
//int main()
//{
//struct p p1 [] = {1, 92, 3, 94, 5, 96}; q ptr1 = p1;
//printf("%d\n", ptr1->x);
//}

//#include <stdio.h>
//struct p
//{
//int k;
//char c;
//float f;
//};
//int main()
//{
//struct p x = {.c = 97, .f = 3, .k=1};
//printf("%f\n", x.f);
//}

//#include <stdio.h>
//void main()
//{
//char *a[3] = {"hello", "this"}; printf("%s", a[1]);
//}

//#include <stdio.h>
//struct point
//{
//int x;
//int y;
//} p[] = {1, 2, 3, 4, 5};
//void foo(struct point*);
//int main()
//{
//foo(p);
//}
//void foo(struct point p[])
//{
//printf("%d %d\n", p->x, p[2].y);
//}

//#include <stdio.h>
//struct point
//{
//int x;
//int y;
//};
//void foo(struct point*);
//int main()
//{
//struct point p1[] = {1, 2, 3, 4, 5}; foo(p1);
//}
//void foo(struct point p[])
//{
//printf("%d %d\n", p->x, (p + 2)->y);
//}

//#include <stdio.h>
//struct student
//{
//char a[5];
//};
//void main()
//{
//struct student s[] = {"hi", "hey"}; 
//printf("%c", s[0].a[1]);
//}

//#include <stdio.h>
//struct temp
//{
//int a;
//int b;
//int c;
//};
//main()
//{
//struct temp p[] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//}

//#include <stdio.h>
//struct student {
//char *c;
//};
//void main()
//{
//struct student s[2]; printf("%d", sizeof(s));
//}

//#include <stdio.h>
//struct point
//{
//int x;
//int y;
//};
//int main()
//{
//struct point p = {1};
//struct point p1 = {1};
//if(p == p1)
//printf("equal\n");
//else
//printf("not equal\n");
//}

//#include <stdio.h>
//struct student
//{
//char *c;
//struct student *point;
//};
//void main()
//{
//struct student s;
//struct student *m = &s;
//printf("%d", sizeof(student));
//}

//#include <stdio.h>
//struct p
//{
//int k;
//char c;
//float f;
//};
//int main()
//{
//struct p x = {.c = 97};
//printf("%f\n", x.f);
//}

//#include <stdio.h>
//struct point
//{
//int x;
//int y;
//};
//struct notpoint
//{
//int x;
//int y;
//};
//int main()
//{
//struct point p = {1};
//struct notpoint p1 = p;
//printf("%d\n", p1.x);
//}

//#include <stdio.h>
//struct point
//{
//int x;
//int y;
//};
//void foo(struct point*);
//int main()
//{
//struct point p1 [] = {1, 2, 3, 4, 5}; foo(p1);
//}
//void foo(struct point p[])
//{
//printf("%d %d\n", p->x, p[3].y);
//}

//#include <stdio.h>
//struct temp
//{
//int a;
//} s;
//void change(struct temp);
//main()
//{
//s.a = 10;
//change(s);
//printf("%d\n", s.a);
//}
//void change (struct temp s)
//{
//s.a =1;
//}

//#include <stdio.h>
//struct point
//{
//int x;
//int y;
//};
//void foo(struct point*);
//int main()
//{
//struct point p1 = {1, 2}; foo(&p1);
//}
//void foo(struct point *p)
//{
//printf("%d\n", *p.x++);
//}

//#include <stdio.h>
//struct point
//{
//int x;
//int y;
//};
//void foo(struct point*);
//int main()
//{
//struct point p1 [] = {1, 2, 3, 4, 5}; foo(p1);
//}
//void foo(struct point p[])
//{
//printf("%d %d\n", p->x, (p + 2).y);
//}

//#include <stdio.h>
//struct
//{
//int k;
//char c;
//};
//int main()
//{
//struct p;
//p.k = 10;
//printf("%d\n", p.k);
//}

//#include <stdio.h>
//struct p
//{
//int x;
//int y;
//};
//int main()
//{
//struct p p1[] = {1, 92, 3, 94, 5, 96};
//struct p *ptr1 = p1;
//int x = (sizeof(p1) / 5);
//if (x == 3)
//printf("%d %d\n", ptr1->x, (ptr1 + x - 1)->x);
//else
//printf("false\n");
//}


//#include <stdio.h>
//void main()
//{
//int lookup [100] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
//printf("%d", lookup [3]);
//}

//#include <stdio.h>
//typedef struct p *q;
//struct p
//{
//int x;
//char y;
//q ptr;
//};
//int main()
//{
//struct p p = {1, 2, &p};
//printf("%d\n", p.ptr->x);
//return 0;
//}

//#include <stdio.h>
//struct student
//{
//char *name;
//};
//void main()
//{
//struct student s [2], r[2];
//s[1] = s[0] = "area";
//printf("%s%s", s[0].name, s[1].name);
//}

//#include <stdio.h>
//struct student {
//char *name;
//};
//struct student s[2];
//void main()
//{
//s[0].name = "alan";
//s[1] = s[0];
//printf("%s%s", s[0].name, s[1].name);
//s[1].name = "turing";
//printf("%s%s", s[0].name, s[1].name);
//}

//#include <stdio.h>
//struct student fun(void) {
//struct student {
//char *name;
//};
//struct student s;
//s.name = "alan";
//return s;
//}
//void main()
//{
//struct student m = fun(); printf("%s", m.name);
//}

//#include <stdio.h>
//struct p {
//int x;
//char y;
//};
//void foo(struct p*);
//int main()
//{
//typedef struct p* q;
//struct p p1[] = {1, 92, 3, 94, 5, 96};
//foo(p1);
//}
//void foo(struct p* p1)
//{
//q ptr1 = p1;
//printf("%d\n", ptr1->x);
//}

//#include<stdio.h>
//struct p{
//int x;
//char y;
//};
//int main(){
//struct p p1[] = {1,92,3, 94,5,96};
//struct p *ptr1 = p1;
//int x = (sizeof(p1)/3);
//if(x == sizeof(int)+sizeof(char))
//printf("%d\n",ptr1->x);
//else
//printf("false");
//}

//#include <stdio.h>
//struct student
//{
//char *c;
//};
//void main()
//{
//struct student m;
//struct student *s = &m;
//s->c = "hello";
//printf("%s", s->c);
//}

//#include <stdio.h>
//struct student
//{
//char *name;
//};
//struct student s;
//struct student fun(void)
//{
//s.name = "newton";
//printf("%s\n", s.name);
//s.name = "alan";
//return s;
//}
//void main()
//{
//struct student m = fun();
//printf("%s\n", m.name);
//m.name = "turing";
//printf("%s\n", s.name);
//}


//#include <stdio.h>
//struct p
//{
//int x;
//char y;
//};
//int main()
//{
//struct p p1[] = {1, 92, 3, 94, 5, 96};
//struct p *ptr1 = p1;
//int x = (sizeof(p1) / sizeof(ptr1));
//if (x == 1)
//printf("%d\n", ptr1->x);
//else
//printf("false\n");
//}

//#include <stdio.h>
//struct student {
//char *name;
//};
//struct student s [2], r[2];
//void main()
//{
//s[0].name = "alan";
//s[1] = s[0];
//r = s;
//printf("%s%s", r[0].name, r[1].name);
//}


//#include <stdio.h>
//struct student {
//char *name;
//};
//struct student fun(void) {
//struct student s; s.name = "alan";
//return s;
//}
//void main()
//{
//struct student m = fun(); printf("%s", m.name);
//}

//#include <stdio.h>
//struct p
//{
//int x;
//int y;
//};
//int main()
//{
//struct p p1[] = {1, 2, 3, 4, 5, 6};
//struct p *ptr1 = p1;
//printf("%d %d\n", ptr1->x, (ptr1 + 2)->x);
//}

//#include <stdio.h>
//struct p
//{
//int x[2];
//};
//struct q
//{
//int *x;
//};
//int main()
//{
//struct p p1 = {1, 2};
//struct q *ptr1;
//ptr1->x = (struct q*)&p1.x;
//printf("%d\n ", ptr1->x[1]);
//}

//#include <stdio.h> 
//void main() {
//struct student {
//int no;
//char name [20];
//};
//struct student s;
//s.no = 8;
//printf("%d", s.no);
//}

//#include <stdio.h>
//struct student
//{
//char *name;
//};
//struct student fun(void)
//{
//struct student s; s.name = "alan";
//return s;
//}
//void main()
//{
//struct student m = fun(); 
//s.name = "turing"; printf("%s", m.name);
//}

//#include <stdio.h>
//struct student
//{
//};
//void main()
//{
//struct student s[2]; printf("%d", sizeof(s));
//}

//#include <stdio.h> 
//void main()
//{
//char *a[3][3] = {{"hey", "hi", "hello"}, {"his", "her", "hell"} ,{"hellos", "hi's", "hmm"}}; printf("%s", a[1][1]);
//}


//#include <stdio.h>
//typedef struct p *q;
//int main()
//{
//struct p
//{
//int x;
//char y;
//q ptr;
//};
//struct p p = {1, 2, &p};
//printf("%d\n", p.ptr->x);
//return 0;
//}


//#include <stdio.h>
//struct student
//{
//char *c;
//struct student *point;
//};
//void main()
//{
//struct student s;
//struct student m;
//s.c = m.c = "hi";
//m.point = &s;
//(m.point)->c = "hey";
//printf("%s\t%s\t", s.c, m.c);
//}

//#include <stdio.h>
//struct point
//{
//int x;
//int y;
//};
//void foo(struct point*);
//int main()
//{
//struct point p1[] = {1, 2, 3, 4}; foo(p1);
//}
//void foo(struct point p[])
//{
//printf("%d %d\n", p->x, ++p->x);
//}


//#include <stdio.h>
//struct point {
//int x;
//int y;
//};
//struct notpoint {
//int x;
//int y;
//};
//struct point foo();
//int main()
//{
//struct point p = {1};
//struct notpoint p1 = {2, 3}; p1 = foo();
//printf("%d\n", p1.x);
//}
//struct point foo() {
//struct point temp = {1, 2};
//return temp;
//}

//#include <stdio.h>
//struct p
//{
//int x;
//char y;
//};
//int main()
//{
//struct p p1[] = {1, 92, 3, 94, 5, 96};
//struct p *ptr1 = p1;
//int x = (sizeof(p1) / sizeof(struct p));
//printf("%d %d\n", ptr1->x, (ptr1 + x - 1)->x);
//}


#include <stdio.h>
struct p
{
char *name;
struct p *next;
};
struct p *ptrary [10];
int main()
{
struct p p;
p.name = "xyz"; 
p.next = NULL;
ptrary [0] = &p;
printf("%s\n", ptrary [0]->name);
return 0;
}

