#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;

	printf("Enter the number : ");
	scanf("%d",&n);

	if(n<=0)
	{
		printf("Invalid Input !!");
	}

	printf("Revrse number is : ");
	for(int i=n;i>=1;i--)
	{
		printf(" %d ",i);
	}
	return 0;
}