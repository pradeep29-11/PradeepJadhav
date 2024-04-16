#include<stdio.h>
int main()
{
	int num;
	char ch;

	printf("Enter the number : ");
	scanf("%d",&num);

	getchar();

	printf("Enter the charcter : ");
	scanf("%c",&ch);

	printf("your number is :%d\n ",num);
	printf("your charcter is %c\n ",ch);

	return 0;
}