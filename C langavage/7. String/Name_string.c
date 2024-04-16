#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	char ch[100][100];

	printf("How many names you wamt to store : ");
	scanf("%d",&n);
	getchar();

	for(int i=0;i<n;i++)
	{
		printf("Enter the name : ");
		gets(ch[i]);
	}
	printf("Your names : \n");
	for(int i=0;i<n;i++)
	{
		printf("%s\n",ch[i]);
	}
	printf("Searching name :\n");
	for(int i=0;i<n;i++)
	{
		if(strstr(ch[i],"pradeep")!=NULL)
		{
			printf("%s\n",ch[i]);
		}
	}
	return 0;
}