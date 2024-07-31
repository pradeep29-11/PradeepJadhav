#include<Stdio.h>
#include<string.h>
union student
{
	int rno;
	char name[100];
	float perce;
};
int main()
{
	union student s;

	s.rno=15;
	printf("Roll no : %d Name %s Percentage : %f\n",s.rno,s.name,s.perce);

	strcpy(s.name,"pradeep");
	printf("Roll no : %d Name %s Percentage : %f\n",s.rno,s.name,s.perce);

	s.perce=15.5;
	printf("Roll no : %d Name %s Percentage : %f\n",s.rno,s.name,s.perce);


	return 0;
}