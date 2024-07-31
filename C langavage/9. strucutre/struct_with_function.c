#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[50];
	float per;
};
void accept(struct student x[],int y)
{
	for(int i=0;i<y;i++)
	{
		printf("Enter the Roll no ");
		scanf("%d",&x[i].rno);

		getchar();
		printf("Enter the name : ");
		gets(x[i].name);

		printf("Enter the percentage : ");
		scanf("%f",&x[i].per);
	}
}
void maximum(struct student s[],int n )
{
	float max;
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
}
void display(struct student s[],int n)
{
	printf("========TOPER STUDENT=======\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t %s\t %f\t \n",s[i].rno,s[i].name,s[i].per);
	}
}
void Searching(struct student s[],int n,char ch[])
{
	for(int i=0;i<n;i++)
	{
		if(strstr(s[i].name,ch))
		{
			printf("%d\t %s\t %f\t \n",s[i].rno,s[i].name,s[i].per);
		}
	}
}
int main()
{
	int n;
	struct student a[10];
	char name[50];

	printf("How many student : ");
	scanf("%d",&n);

	accept(a,n);
	display(a,n);
	maximum(a,n);

	getchar();
	printf("Enter the name to search : ");
	gets(name);

	Searching(a,n,name);
	return 0;
}