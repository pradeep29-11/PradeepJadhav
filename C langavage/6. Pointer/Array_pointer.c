#include<stdio.h>
int main()
{
	int a[5]={11,22,33,44,55};

	int *p[5]={a,a+1,a+2,a+3,a+4};

	printf("%d %d \n",p[0],a);
	printf("%d %d %d %d %d ",*p[0],*p[1],*p[2],*p[3],*p[4]);
	return 0;
}
