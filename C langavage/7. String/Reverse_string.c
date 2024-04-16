#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i,x;

	printf("Enter the string : ");
	gets(ch);

	x=strlen(ch);

	//printf("%d",x);

	for(i=x-1;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
	return 0;
}