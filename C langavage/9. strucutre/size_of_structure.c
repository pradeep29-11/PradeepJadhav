#include<stdio.h>

struct student
{
	int rno;
	char name[10];
	float fees;
};
int main()
{
	struct student s;

	printf("size : %d",sizeof(s));
	return 0;
} 