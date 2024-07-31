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
	struct student d;

	d.rno=15;
	strcpy(d.name,"pradeep jadhav");
	d.per=15.55;

	printf("Roll no : %d Name : %s Percentage : %f",d.rno,d.name,d.per);

	return 0;
}