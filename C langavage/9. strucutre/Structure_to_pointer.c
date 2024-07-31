#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[100];
	float fees;
};
int main()
{
	struct student s;
	struct student *p;

	p=&s;

	p->rno=16;
	strcpy(p->name,"aniket jumde");
	p->fees=1000;

	printf("Roll no : %d Name : %s Fess : %f\n",p->rno,p->name,p->fees);

	return 0;
}