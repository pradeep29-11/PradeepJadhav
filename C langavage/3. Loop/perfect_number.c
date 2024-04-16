#include<stdio.h>
int main()
{
	int n,ans;

	printf("enter the number : ");
	scanf("%d",&n);

	ans=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
		ans=ans+i;
		}
	}
	if(ans==n)
	{
	printf("%d is perfect number ", n );
	}
	else
	{
		printf("%d is not pefect number ",n);
	}
	return 0;
}