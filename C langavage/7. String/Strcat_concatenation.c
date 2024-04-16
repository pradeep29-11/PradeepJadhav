#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[100];
	char ch2[100];

	printf("Enter the first string : ");
	gets(ch1);

	printf("Enter the Second string : ");
	gets(ch2);

	printf("Before concatenation ch1 : %s   ch2 : %s\n",ch1,ch2);

	strcat(ch1,ch2);

	printf("After concatenation ch1 : %s   ch2 : %s",ch1,ch2);

	return 0;
}