#include<stdio.h>
int main()
{
	int n;
	int *p=&n;

	printf("Enter the value : ");
	scanf("%d",p);

	printf("Value of n : %d ",n);
	return 0;
}