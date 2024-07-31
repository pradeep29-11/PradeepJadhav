#include<stdio.h>
#include<string.h>

struct date
{
	int date;
	int month;
	int year;
};
struct student
{
	int rno;
	char name[100];
	int fees;
	struct date s;
};
int main()
{
	//struct date s;
	struct student d;

	d.rno=15;
	d.fees=120.0;
	strcpy(d.name,"pradeep jadhav");
	d.s.date=20;
	d.s.month=4;
	d.s.year=2024;

	printf("Roll no : %d Name : %s Fess : %f\n",d.rno,d.name,d.fees);
	printf("Date : %d-%d-%d\n",d.s.date,d.s.month,d.s.year);

	return 0;
}