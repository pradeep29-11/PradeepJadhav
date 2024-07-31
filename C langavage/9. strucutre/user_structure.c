#include<stdio.h>
struct student 
{
	int rno;
	float per;
	char name[50];
};
int main()
{
	struct student s;

	printf("Enter the roll no : ");
	scanf("%d",&s.rno);

	printf("Enter the percentage : ");
	scanf("%f",&s.per);

	getchar();
	printf("Enter the name of the student : ");
	gets(s.name);

	printf("Roll no : %d  Name : %s   percentage %f",s.rno,s.name,s.per);

}