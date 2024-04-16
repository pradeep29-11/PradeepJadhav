 /* Assigment : multiplication of number
    Author    : pradeep jadhav
    Date      : 23-01-24
    */
#include<stdio.h>
int main()
{
	int number1,number2,multiplication;

	printf("enter the first number :");
	scanf("%d",&number1);

	printf("enter the second number : ");
	scanf("%d",&number2);

	multiplication =number1*number2;

	printf("multiplication of %d and %d is  %d ", number1,number2,multiplication);
	return 0;
}