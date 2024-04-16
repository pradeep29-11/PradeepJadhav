#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100],str[100];
	char *p;

	printf("Enter the string : ");
	gets(ch);

	printf("Enter the string : ");
	gets(str);

	p=strstr(ch,str);

	if(p==NULL)
	{
		printf("%s is not found in %s ",str,ch);
	}
	else
	{
		printf("%s is found in %s ",str,ch);
	}
		
	return 0;
}