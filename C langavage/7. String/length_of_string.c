#include<stdio.h>
int main()
{
	char ch[100];
	int count;

	printf("Enter the string : ");
	gets(ch);

	count =0;

	for(int i=0;ch[i]!='\0';i++)
	{
		count++;
	}

	printf("Length of the string : %d",count);
	return 0;
}