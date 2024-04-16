#include<stdio.h>
int main()
{
	int a;

	printf("Enter the number : ");
	scanf("%d",&a);

	if(a>=0)
	{
		printf("%d is the whole number ",a);
	}

	else
		printf("%d is not a whole number ",a);
	return 0;

}