#include<stdio.h>
int main()
{
	int marks;

	printf("Enter the marks : ");
	scanf("%d",&marks);

	if(marks>=90 && marks<=100)
	{
		printf("Student having A Grade ");
	}
	else if(marks>=80 && marks<=89)
	{
		printf("Sudent having B Grade ");
	}
	else if(marks>=70 && marks<=79)
	{
		printf("Student having C Grade ");
	}
	else if(marks>=60 && marks<69)
	{
		printf(" Student having D Grade ");
	}
	else
	{
		printf("Student is Fail ");
	}
	return 0;
}