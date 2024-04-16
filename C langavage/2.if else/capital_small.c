#include<stdio.h>
int main()
{
	char ch,ans;

	printf("Enter the charactern : "); 
	scanf("%c",&ch);

	if(ch>='A' && ch<='Z')
	{
		
		ans=ch+32;
		printf("capital %c small %c ",ch,ans);
	}
	else if(ch>='a' && ch<='z')
	{
		ans=ch-32;
		printf("small : %c capital %c ",ch,ans);
	}
	else
	{
		printf("It is not character :");
	}
	return 0;
}        