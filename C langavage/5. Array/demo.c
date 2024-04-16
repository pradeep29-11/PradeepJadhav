#include<stdio.h>
int main()
{
	int a[5]={11,22,33,44,55};

	printf("%d %d %d %d %d \n",a[0],a[1],a[2],a[3],a[4]);

	printf("%lu %lu %lu %lu %lu \n",&a[0],&a[1],&a[2],&a[3],&a[4]);

	printf("%lu",a);
	return 0;
}