#include<stdio.h>
int mystrlen(char ch[])
{
	int count;
	count=0;

	for(int i=0;ch[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
int main()
{
	char ch[100];
	int x=0;

	printf("Enter the string : ");
	gets(ch);

	x=mystrlen(ch);

	printf("Length of the string : %d",x);
	return 0;
}