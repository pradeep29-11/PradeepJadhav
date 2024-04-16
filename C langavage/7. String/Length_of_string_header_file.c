#include<stdio.h>
#include"mystring.h"
int main()
{
	char ch[100];
	int x;

	printf("Enter the string : ");
	gets(ch);

	x=mystrlen(ch);

	printf("Length of the string : %d",x);
	return 0;
}