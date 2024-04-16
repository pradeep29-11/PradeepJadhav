#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char ch[100],s[100];

	printf("Enter the string : ");
	gets(ch);

	printf("Enter the string : ");
	gets(s);
 
	strncpy(s,ch);
	if(s==NULL)
	{
		printf("Unale to copy the data!");
		exit(0);
	}

	printf("%s first string is copied in second string : %s",ch,s);

	return 0;
}