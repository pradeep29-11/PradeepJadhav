#include<stdio.h>
int main()
{
	int n,a[100],min;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&a[i]);
	}
	printf("\n ");

	min=a[0];

	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}

	printf("Minimum number : %d ",min);
	return 0;
}