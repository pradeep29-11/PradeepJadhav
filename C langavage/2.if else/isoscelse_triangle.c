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

	if(num1==num2 && num1==num3)
	{
		printf("It is equilateral traingle !! ");
	}
	else if (num1==num2 || num2==num3 || num3==num1)
	{
		printf("It is isoscelse traingle !!");
	}
	else
	{
		printf("It is scalene traingle !!");
	}

	return 0;
}