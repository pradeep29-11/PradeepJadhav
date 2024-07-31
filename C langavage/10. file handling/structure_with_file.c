#include<stdio.h>
#include<stdlib.h>

struct student 
{
	int rno;
	char name[50];
	float per;
};

int main()
{
	struct student s;
	FILE *p;
	int n;
	//char fname[50];

	printf("How many student you want : ");
	scanf("%d",&n);

	getchar();
	//printf("Enter the name of file : ");
	//gets(fname);

	p=fopen("student.txt","a");

	if(p==NULL)
	{
		printf("Unable to open the file ");
		exit(0);
	}

	for(int i=0;i<n;i++)
	{
		printf("Enter the roll no : ");
		scanf("%d",&s.rno);

		getchar();
		printf("Enter the name of the student : ");
		gets(s.name);

		printf("Enter the percentage : ");
		scanf("%f",&s.per);

		fprintf(p,"%d %s %.2f \n",s.rno,s.name,s.per);
	}

	fclose(p);
	printf("Data is copied sussefully ");

	return 0;
}