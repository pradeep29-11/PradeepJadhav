#include<stdio.h>
int main()
{
	int n,a[100],count;

	printf("How many number you want to store : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&a[i]);
	}
	printf("\n");

	count=0;

	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count++;
		}
	}

	printf("count of Even number : %d ",count);

	return 0;
}