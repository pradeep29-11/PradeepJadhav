#include<stdio.h>
int main()
{
	int n,i,m;

	printf("Enter the number : ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Invalid Input!!");
	}

	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		
	}
	return 0;
}