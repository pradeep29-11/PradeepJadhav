#include<stdio.h>
int main()
{
	char ch;

	printf("Enter the capital character : ");
	scanf("%c",&ch);

	if(ch>='A' && ch<='Z')
	{
		printf("capital character : %c  small character : %c ",ch,ch+32);
	}
	else
	{
		printf("%c is not capital charater ",ch);
	}
	return 0;
}