#include<stdio.h>
int main()
{
	//char ch[100];
	char s[100];

	//printf("Enter the name : ");
	//scanf("%s",ch);

	printf("Enter the Full name : ");
	gets(s);

	//Sprintf("Name : %s\n",ch);
	//printf("Full Name : %s",s);

	for(int i=0;s[i]!='\0';i++)
	{
		printf("%c\n",s[i]);
	}
	return 0;
}