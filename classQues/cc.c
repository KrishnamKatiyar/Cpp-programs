#include<stdio.h>
int main()
{
	int n,count;
	scanf("%d",&n);
	
	count = 1;
	
	START:
		 
		 if(count<=10)
	    {
		printf("%d * %d = %d\n",n,count,n*count);
		count++;
		goto START;
    	}
	
	
	return 0;
}
