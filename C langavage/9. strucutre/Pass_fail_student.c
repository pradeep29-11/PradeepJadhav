#include<stdio.h>
#include<string.h>
struct student 
{
	int rno;
	char name[100];
	float per;
};
int main()
{
	struct student s[10];
	int n;

	printf("How many student : ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the roll no : ");
		scanf("%d",&s[i].rno);

		getchar();
		printf("Enter the Name : ");
		//getline(s[i].name);
		scanf("%s",s[i].name);

		printf("Enter the percentage : ");
		scanf("%f",&s[i].per);
	}

	printf("Roll no\tName \tpercentage \n");
	for(int i=0;i<n;i++)
	{
		printf("%d \t%s \t%.2f \n",s[i].rno,s[i].name,s[i].per);
	}

	printf("-----STUDENT PASS-----\n");
	printf("Roll no\tName \tpercentage \n");
	for(int i=0;i<n;i++)
	{
		if(s[i].per>=40)
		{
			printf("%d \t%s \t%.2f \n",s[i].rno,s[i].name,s[i].per);
		}
	}
	printf("-----STUDENT FAIL-----\n");
	printf("Roll no\tName \tpercentage \n");
	for(int i=0;i<n;i++)
	{
		if(s[i].per<40)
		{
			printf("%d \t%s \t%.2f \n",s[i].rno,s[i].name,s[i].per);
		}
	}
	return 0;
}