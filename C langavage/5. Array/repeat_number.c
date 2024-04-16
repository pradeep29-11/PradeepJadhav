#include<stdio.h>
int main()
{
	int n,x,a[100],count;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&a[i]);
	}
	printf("Enter the number to check : ");
	scanf("%d",&x);

	count=0;
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
		{
			count++;
		}

	}
	printf("%d is repeated %d time ",x,count);
	return 0;
}