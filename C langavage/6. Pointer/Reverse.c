#include<stdio.h>
int main()
{
	int a[5]={11,22,33,44,55};

	int *p[5]={a,a+1,a+2,a+3,a+4};

	for(int i=;i>=a;i--)
	{
		printf("%d",*p[i]);
	}
	return 0;
}