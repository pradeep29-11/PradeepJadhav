#include<stdio.h>
#include<string.h>

struct student
{
	int rno;
	char name[100];
	float fees;

	struct date
	{
		int date;
		int month;
		int year;
	}ob;
};
int main()
{
	struct student s;

	s.rno=15;
	strcpy(s.name,"pradeep jadhav");
	s.fees=2000;
	s.ob.date=20;
	s.ob.month=04;
	s.ob.year=2024;

	printf("Roll no : %d  Name : %s  Fess : %.2f\n",s.rno,s.name,s.fees);
	printf("Date : %d-%d-%d\n",s.ob.date,s.ob.month,s.ob.year);
}