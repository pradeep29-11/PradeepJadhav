#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int x;

	printf("Enter the first string : ");
	gets(str1);

	printf("Enter the Second string : ");
	gets(str2);

	x=strcmp(str1,str2);

	if(x==0)
	{
		printf("Both the string are equal ");
	}
	else if(x==1)
	{
		printf("first string is greater the second string ");
	}
	else
	{
		printf("Second string greter the first string ");		
	}
	return 0;
}