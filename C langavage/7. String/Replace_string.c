#include<stdio.h>
int main()
{
	char ch[100];

	printf("Enter the string : ");
	gets(ch);

	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='i'||ch[i]=='I')
		{
			ch[i]='*';
		}
		else if(ch[i]==' ')
		{
			ch[i]='#';
		}
		
	}
	printf("%s",ch);
	return 0;
}