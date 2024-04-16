//error.

#include<stdio.h>
int main()
{
	int num;

	printf("Enter the positive number : ");
	scanf("%d",&num);

	if(num%2==0 )
	{
		printf("%d is prime number ",num);
	}
	else if(num%2==1)
	{
		printf("%d is prime number ",num);
	}
	else
	{
		printf("Number is not prime ");
	}
	return 0;
}