#include<stdio.h>
int main()
{
	int n;

	printf("Enter the number : ");
	scanf("%d",&n);

	int *p=&n;

	printf("Value of p : %d\n ",*p);
	printf("Value of p : %d \n", p);
	printf("Value of n : %d \n", n);

	*p=45;
	printf("Value of p : %d\n ",*p);
	printf("Value of p : %d \n", p);
	printf("Value of n : %d \n", n);

	return 0;
}