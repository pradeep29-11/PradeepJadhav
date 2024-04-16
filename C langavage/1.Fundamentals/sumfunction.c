#include<stdio.h>
int calculate(int,int);
int sub(int,int);
int display(int,int);

int calculate(int x,int y)
{
	int z;
	z=x+y;
	return z;
}

int sub(int a,int b)
{
	int r;

	r=a-b;
	return r;
}

int display(int e,int f)
{
	int mul;

	mul=e*f;

	return mul;
}

int main()
{
	int a,b,sum,subtraction;

	printf("enter the first  number : ");
	scanf("%d",&a);

	printf("enter the second number : ");
	scanf("%d",&b);

	sum=calculate(a,b);

	printf("sum of two number is %d \n",sum);

	subtraction=sub(a,b);

	printf("subtraction of two number is %d\n ",subtraction);

	int mul;

	mul=display(a,b);

	printf("multiplication of two number is %d",mul);

	return 0;
}