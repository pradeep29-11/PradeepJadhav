#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i,j,flag;

	printf("Enter the string : ");
	gets(ch);

	j=strlen(ch)-1;
	i=0;

	flag=1;
	while(i<j)
	{
		if(ch[i]!=ch[j])
		{
			flag=0;
			break;
		}
		i++;
		j--;
	}

	if(flag==1)
	{
		printf("Given string is Palindrom ");
	}
	else
	{
		printf("Given string is not Palindrom ");
	}
	return 0;
}