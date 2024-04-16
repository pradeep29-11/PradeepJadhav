#include<stdio.h>
int main()
{
	int num1,num2;
	char ch;

	printf("Enter the first number : ");
	scanf("%d",&num1);

	printf("Enter the second number : ");
	scanf("%d",&num2);

	getchar();

	printf("Which performes you want do (+,-) : ");
	scanf("%c",&ch);

	if(ch=='+')
	{
		printf("your sum is %d ",num1+num2);
	}
	else if(ch=='-')
	{
		printf("your subtraction is %d ",num1-num2);
	}
	else
	{
		printf("Invalid oparation : ");
	}
	return 0;
}