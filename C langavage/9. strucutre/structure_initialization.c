#include<stdio.h>
struct student
{
	int rno;
	char ch[100];
	float per;
};
int main()
{
	struct student s={15,"pradeep",15.50};

	printf("Roll NO : %d Name : %s  Percentage : %f",s.rno,s.ch,s.per);

	return 0;
}