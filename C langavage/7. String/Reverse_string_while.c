#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch;
	int x,i;

	printf("Enter the string : ");
	gets(str);

	x=strlen(str)-1;

	i=0;

	while(i<x)
	{
		ch    =str[i];
		str[i]=str[x];
		str[x]=ch;

		i++;
		x--;
	}

	printf("Reverse string : %s",str);
	return 0;
}