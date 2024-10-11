//#include <stdio.h>
//struct p
//{
//char *name;
//struct p *next;
//};
//struct p *ptrary [10];
//int main()
//{
//struct p p, q;
//p.name = "xyz";
//p.next = NULL;
//ptrary [0] = &p;
//strcpy(q.name, p.name);
//ptrary [1] = &q;
//printf("%s\n", ptrary [1]->name);
//return 0;
//}


//#include <stdio.h>
//struct student
//{
//char a[];
//};
//void main()
//{
//struct student s;
//printf("%d", sizeof(struct student));
//}

//#include <stdio.h>
//int main() {
//struct p {
//char *name;
//struct p *next;
//};
//struct p *ptrary [10];
//struct p p, q;
//p.name = "xyz";
//p.next = NULL;
//ptrary [0] = &p;
//q.name = (char*)malloc(sizeof(char)*3);
//strcpy(q.name, p.name);
//q.next = &q;
//ptrary [1] = &q;
//printf("%s\n", ptrary [1]->next->next->name);
//}


//#include <stdio.h>
//typedef struct student 
//{
//char *a;
//}stu;
//void main()
//{
//struct stu s;
//s.a = "hi";
//printf("%s", s.a);
//}


//#include <stdio.h>
//typedef int integer;
//int main()
//{
//int i = 10, *ptr;
//float f = 20;
//integer j=i;
//ptr = &j;
//printf("%d\n", *ptr);
//return 0;
//}

//#include <stdio.h>
//int (*(x()))[2];
//typedef int (*(*ptr)())[2] ptrfoo;
//int main()
//{
//ptrfoo ptr1;
//ptr1 = x;
//ptr1();
//return 0;
//}
//int (*(x()))[2]
//{
//int (*ary) [2] = malloc(sizeof*ary); return &ary;
//}


//#include <stdio.h>
//typedef struct p
//{
//int x, y;
//};
//int main()
//{
//p k1 = {1, 2};
//printf("%d\n", k1.x);
//}

//#include <stdio.h>
//typedef struct p {
//int x, y;
//}k;
//int main()
//{
//struct p p = {1, 2}; k k1 = p;
//printf("%d\n", k1.x);
//}


//#include <stdio.h>
//union stu
//{
//int ival;
//float fval;
//};
//void main()
//{
//union stu r;
//r.ival = 5;
//printf("%d", r.ival);
//}


//#include <stdio.h> 
//int main() {
//char c = '©';
//putchar(c);
//}


//#include <stdio.h>
//int main(int argc, char** argv)
//{
//char *s = "myworld";
//int i = 3;
//printf("%10.*s", i, s);
//}


//#include <stdio.h>
//int main()
//{
//char n[] = "hello\nworld!";
//char s[13];
//sscanf(n, "%s", s);
//printf("%s\n", s);
//return 0;
//}

//#include <stdio.h> 
//int main() {
//short int i;
//scanf("%hd", &i); printf("%hd", i);
//return 0;
//}


//#include <stdio.h> 
//int main() {
//short int i;
//scanf("%d", &i);
//printf("%hd", i);
//return 0;
//}


//#include <stdio.h>
//int main()
//{
//FILE *fp = stdin;
//int n;
//fprintf(fp, "%d", 45);
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//char *str = "hello, world"; 
//char *str1 = "hello, world";
//if (strcmp(str, str1)) printf("equal");
//else
//printf("unequal");
//}

//#include <stdio.h>
//int main()
//{
//char *str = "hello, world";
//char str1[15] = "hello wo 9";
//strcpy(str, str1);
//printf("%s", str1);
//}


//#include <stdio.h>
//int main()
//{
//char str[10] = "hello";
//char *str1 = "world"; strncat(str, str1, 9);
//printf("%s", str);
//}


//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//char i = 9;
//if (isdigit(i))
//printf("digit\n");
//else
//printf("not digit\n");
//return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//int i = 32;
//if (isspace(i))
//printf("space\n");
//else
//printf("not space\n");
//return 0;
//}


#include <stdio.h>
void main()
{
char *p = calloc(100, 1);
p = "welcome";
printf("%s\n", p);
}



