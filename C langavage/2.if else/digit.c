#include<stdio.h>
int main()
{
	char ch;

	printf("Enter the character : ");
	scanf("%c",&ch);

	if(ch>='0' && ch<='9')
	{
		printf("%c is Digit !!",ch);
	}
	else
	{
		printf("%c  is not Digit !!",ch);
	}
	return 0;
}