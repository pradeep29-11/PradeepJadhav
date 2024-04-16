#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;

	printf("Enter the number : ");
	scanf("%d",&n);

	if(n<0)
	{
		printf("Invalid Input !!");
		exit(0);
	}
	for(int i=0;i<=n;i+2)
	{
		printf("Even number is : %d",i);
	}
	return 0;
}