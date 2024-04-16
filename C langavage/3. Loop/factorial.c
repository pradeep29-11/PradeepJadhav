#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,ans;

	printf("Enter the number : ");
	scanf("%d",&n);

	if(n<0)
	{
		printf("Invalid Input !!");
		exit(0);
	}
	ans=1;
	for(int i=1;i<=n;i++)
	{
		ans=ans*i;
	}
	printf("Factorial %d ",ans);
	
	return 0;
}