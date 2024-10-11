#include<stdio.h>
//int main()
//{
//char *p[1]={"hello"}; 
//printf("%s", (p)[0]);
//return 0;
//}

//int main()
//{
//int a=10,b;
//int arr[]={1,2,3}, brr[3];
//b=a;
//brr=arr;
//printf("%d %d %d", brr[0], brr[1], brr[2]);
//}


//char* print_string()
//{
//static char str[]="Strings!!";
//puts(str);
//return str;
//}
//main()
//{
//puts(print_string());
//}


//void main()
//{
//int a[]={1,2,3};
//printf("%d %d %d",a[0],a[1],a[2]);
//}


//void main()
//{
//int arr[]={1,2,3};
//arr[0,1,2]=10;
//printf("%d %d %d",arr[0], arr[1], arr[2]);
//}
//
//void main()
//{
//int arr[]={1,2,3,4,5},i; arr[1+2]=10;
//for(i=0;i<5;i++)
//printf("%d ",arr[i]);
//}

//void main()
//{
//int i=0;
//for(;i++;)
//printf("%d", i);
//}

//#include<stdio.h>
//int main()
//{
//int ary[2][3];
//ary[][]={{1,2,3}, {4,5,6}};
//printf("%d\n", ary [1] [0]);
//return 0;
//}

//#include<stdio.h>
//#pragma (1)
//struct test
//{
//int i;
//char j;
//};
//int main()
//{
//printf("%d", sizeof(struct test));
//return 0;
//}

//struct book
//{
//char title[20];
//char author[20];
//int pages;
//float price;
//};
//main()
//{
//struct book Cbook;
//printf("%d bytes", sizeof(Cbook)); }


//void main()
//{
//int *ptr=10;
//printf("The value of pointer is%p", ptr);
//}

//void main()
//{
//int *ptr;
//ptr=(int*)malloc(sizeof(int));
//printf("If not assigned a value, the allocated object");
//}

//void main() {
//int n = 1;
//switch (n)
//{
//case 1:
//printf("Case 1 ");
//case 2:
//printf("Case 2 ");
//case 3:
//printf("Case 3 ");
//break;
//case 1:
//printf("case 1 ");
//default:
//}
//printf("default ;) ");
//}

//void main()
//{
//int a=10;
//const int *ptr=&a;
//*ptr=50;
//printf("The changed value of pointed object is%d", *ptr);
//}

//void main()
//{
//int arr[6]={1,2,3,4};
//int i;
//for(i=0;i<6;i++)
//printf("%d",arr[i]);
//}
//
//struct book
//{
//char title[20];
//char author[20];
//int pages;
//float price;
//};
//main()
//{
//book Cbook;
//printf("The size of object Cbook is %d bytes", sizeof(Cbook)); }

//void main()
//{
//int size=3;
//int arr[size];
//arr[0]=arr[1]=arr[2]=5;
//printf("%d %d %d", arr[0], arr[1], arr[2]);
//}

//#include<stdio.h>
//int main()
//{
//int main=3;
//printf("%d", main);
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//int n=0,m=0;
//if(n>0)
//if(m>0)
//printf("True");
//else
//printf("False");
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//int y=10000;
//int y=34;
//printf("Hello World! %d\n",y);
//return 0;8.
//}

//void main()
//{
//int a=10, b=20;
//int *const ptr=&a;
//*ptr=20;
//printf("The changed value of pointed object is%d", *ptr); 
//ptr=&b;
//*ptr=10;
//printf("The changed value of pointed object is%d", *ptr);
//}

//struct book
//{
//char *title;
//char *author;
//int pages;
//float price;
//};
//main()
//{
//struct book Cbook;
//Cbook.title="The power of positive attitude";
//Cbook.author="P Subramanyam";
//Cbook.pages=400;
//Cbook.price=225.50;
//printf("%s by %s is of %f rupees", Cbook.title, Cbook.author, Cbook.price);
//}

//void main()
//{ printf("%d%d%d",sizeof(char*), sizeof(int*), sizeof(float*));
//}

//void main()
//{
//int arr[]={1,2,3},brr[]={1,2,3};
//if(arr==brr)
//printf("Same");
//else
//printf("Not Same");
//}

//void main()
//{
//char *p1, p2;
//printf("%d%d",sizeof(p1), sizeof(p2));
//}

//#include<stdio.h> 
//int main()
//{
//char **p={"hello", "hi", "bye"};
//printf("%s", (p)[0]);
//return 0;
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

//void main()
//{
//int a=10,b=20;
//const int *const ptr=&a;
//*ptr=20;
//printf("The changed value of pointed object is%d", *ptr); ptr=&b;
//*ptr=10;
//printf("The changed value of pointed object is%d", *ptr);
//}

//void main()
//{
//int i=3,j=3;
//for(;i<6,j<4;i++,j++)
//printf("%d %d\n",i,j);
//}

//struct book
//{
//char title [20];
//char author[20];
//int pages;
//float price;
//};
//main()
//{
//struct book Cbook;
//Cbook.title="The power of positive attitude";
//Cbook.author="P Subramanyam";
//Cbook.pages=400;
//Cbook.price=225.50;
//printf("%s by %s is of %f rupees", Cbook.title, Cbook.author, Cbook.price);
//}

//#include<stdio.h>
//#define hello
//int main()
//{
//#ifdef hello
//#define hi 4
//#else
//#define hi 5
//#endif
//printf("%d", hi);
//return 0;
//}

//void main()
//{
//int arr [];
//arr[0]=arr[1]=arr[2]=5;
//printf("%d %d %d", arr[0], arr[1], arr[2]);
//}

//#include<stdio.h>
//enum birds (SPARROW, PEACOCK, PARROT};
//enum animals (TIGER = 8, LION, RABBIT, ZEBRA};
//int main()
//{
//enum birds m = TIGER;
//int k;
//k=m;
//printf("%d\n", k);
//return 0;
//}

//void main()
//{
//int a=10;
//int *ptr=&a;
//printf("%d%d", ++*ptr, *ptr++);
//}

//void main()
//{
//int arr[]={1,2,3,4,5},i;
//arr[2.5+0.5]=10;
//for(i=0;i<5;i++)
//printf("%d",arr[i]);
//}

//void main()
//{
//int a=10;
//int *ptr=&a;
//printf("%d%d", *ptr++,++*ptr);
//}

//void main()
//{
//int array[]={1,2,3,4};
//printf("%d ",sizeof(array)/sizeof(array[0]));
//}

//#include<stdio.h>
//int main()
//{
//char *p=0;
//*p='a';
//printf("value in pointer p is %c\n",*p);
//return 0;
//}

//void main()
//{
//int i=1; for(;;)
//{
//printf("%d", i); if(i=5) break;
//}
//}

//void main()
//{
//int *ptr;
//ptr=(int*)calloc(sizeof(int));
//printf("If not assigned a value, the allocated object");
//}

//#include<stdio.h>
//struct p {
//int k;
//char c;
//float f;
//};
//int main()
//{
//struct p x={.c=97};
//printf("%f\n",x.f);
//}

//#include<stdio.h>
//int main()
//{
//int i=0,j=1;
//int *a[]={&i,&j};
//printf("%d", *a[0]);
//return 0;
//}

//#include<stdio.h>
//union Sti
//{
//int nu;
//char m;
//};
//int main()
//{
//union Sti s;
//printf("%d",sizeof(s));
//return 0;
//}

//void main()
//{
//int *ptr=0;
//printf("The value of pointer is%p", ptr);
//}

void main()
{
int a[2]={1,2,3};
printf("%d %d %d",a[0],a[1],a[2]);
}
