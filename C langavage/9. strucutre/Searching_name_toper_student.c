#include<stdio.h>
#include<string.h>
struct student 
{
	int rno;
	char name[50];
	float per;
};
int main()
{
	int n;
	struct student s[10];
	float max;
	char ch[50];

	printf("How many student : ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the roll no : ");
		scanf("%d",&s[i].rno);

		getchar();
		printf("Enter the name : ");
		gets(s[i].name);

		printf("Enter the percentage : ");
		scanf("%f",&s[i].per);
	}
	printf("------STUDENT SACHINE-------\n");
	printf("Roll No \tName \tPercentage\t\n");

	getchar();
	printf("Enter the name to search the student : ");
	gets(ch);
	for(int i=0;i<n;i++)
	{
		if(strstr(s[i].name,ch))
		{
			printf("%d\t %s\t %f\t \n",s[i].rno,s[i].name,s[i].per);
		}
	}

	printf("----MAXIMUM MARKS STUDENT-------\n");
	for(int i=0;i<n;i++)
	{
		max=s[0].per;
		if(max<s[i].per)
		{
			max=s[i].per;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(max==s[i].per)
		{
			printf("%d\t %s\t %f\t \n",s[i].rno,s[i].name,s[i].per);
		}
	}
	return 0;
}