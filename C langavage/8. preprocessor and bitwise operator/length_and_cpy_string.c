#include<stdio.h>
#include"mystrlen.h"
int main()
{
	int n;
	char ch[100],str[100];

	printf("Enter the string : ");
	gets(ch);

	n=mystrlen(ch);
	mystrcpy(str,ch);

	printf("Length of the string : %d\n",n);
	printf("%s is copy in %s",ch,str);
	return 0;
}