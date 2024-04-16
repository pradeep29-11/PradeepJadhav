/*	Assigment : maxx and min number
	Author    : pradeep jadhav
	Date      : 1/02/24
*/
#include<stdio.h>
int main()
{
	int num1,num2;

	printf("Enter the first number : ");
	scanf("%d",&num1);

	printf("Enter the second number : ");
	scanf("%d",&num2);

	if(num1>num2 )
	{
		printf("%d is maxx number\n ",num1);
		printf("%d is min number\n ",num2);
	}
	else
	{
		printf("%d is maxx number\n ",num2);
		printf("%d is min number\n ",num1);
	}
	return 0;
}