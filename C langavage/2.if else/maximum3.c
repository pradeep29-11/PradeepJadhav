#include<stdio.h>
int main()
{
	int num1,num2,num3;

	printf("Enter the first number : ");
	scanf("%d",&num1);

	printf("Enter the second number : ");
	scanf("%d",&num2);

	printf("Enter the third number : ");
	scanf("%d",&num3);

	if(num1==num2 && num2==num3 && num3==num1)
	{
		printf("Number is equal !!!");
	}
	else if(num1==num2)
	{
		printf("Number first and second are equal !!!");
	}
	else if(num2==num3)
	{
		printf("Number second and third are equal !!!");
	}
	else if(num1==num3)
	{
		printf("Number first and third are equal !!!");
	}
	else if(num1>num2 && num1>num3)
	{
		printf("%d is maximum number ",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("%d is maximum number ",num2);
	}
	else
	{
		printf("%d is maximum number ",num3);
	}
	return 0;
}