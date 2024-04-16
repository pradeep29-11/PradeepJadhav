#include<stdio.h>
int main()
{
	int n,a[100],max;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&a[i]);
	}
	printf("\n ");

	max=a[0];

	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Maximum number : %d ",max);
	return 0;
}