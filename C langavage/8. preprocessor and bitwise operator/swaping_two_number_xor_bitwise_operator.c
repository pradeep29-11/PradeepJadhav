#include<stdio.h>
int main()
{
	int x,y;

	printf("Enter the first number : ");
	scanf("%d",&x);

	printf("Enter the second number : ");
	scanf("%d",&y);

	x=x^y;
	y=x^y;
	x=x^y;

	printf("Swaping number x : %d\n y : %d",x,y);
	return 0;
}