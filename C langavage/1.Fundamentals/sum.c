#include<stdio.h>
int main()
{
	int number1,number2,sum;

	printf("enter the first number : ");
	scanf("%d",&number1);

	printf("enter the second number : ");
	scanf("%d",&number2);

	sum=number1+number2;

	printf("sum of number is %d \n",sum);
	printf("sum of %d and %d is %d ", number1,number2,sum);
	return 0;
}