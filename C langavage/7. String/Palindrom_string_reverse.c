#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100],rev[100];
	int i,j;

	printf("Enter the string : ");
	gets(ch);

	j=strlen(ch)-1;
	i=0;

	while(j>=0)
	{
		rev[i]=ch[j];
		i++;
		j--;
	}
	rev[i]='\0';

	if(strcmp(ch,rev))
	{
		printf("%s is not palindrom",ch);
	}
	else
	{
		printf("%s is the palindrom",ch);
	}
	return 0;
}