#include<stdio.h>

void mystrcpy(char ch[],char str[])
{
	int i;
	i=0;
	while(str[i]!='\0')
	{
		ch[i]=str[i];
		i++;
	}
	ch[i]='\0';
}
int main()
{
	char ch[100],str[100];

	printf("Enter the string : ");
	gets(str);
 
	mystrcpy(ch,str);
	printf("%s is copied in %s ",str,ch);
	return 0;
}