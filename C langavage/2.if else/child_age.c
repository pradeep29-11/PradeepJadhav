#include<stdio.h>
int main()
{
	int age;

	printf("Enter the age : ");
	scanf("%d",&age);

	if(age>=0 && age<=12)
	{
		printf("child !! ");
	}
	else if(age>=13 && age<=19)
	{
		printf("Teenager !! ");
	}
	else if(age>=20 &&  age<=35)
	{
		printf("Young Adult !! ");
	}
	else if(age>=36 && age<=60)
	{
		printf("Adult !! ");
	}
	else
	{
		printf("Senior !! ");
	}
	return 0;
}