#include<stdio.h>
int main()
{
	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	if(num==0)
	{
		printf("%d is whole number ",num);
	}
	else if(num>0)
	{
		printf("%d is whole as well as natural number ",num);
	}
	else
	{
		printf("%d is not whole as well as natural ",num);
	}
	return 0;
}