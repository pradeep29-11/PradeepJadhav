#include<stdio.h>
int main()
{
	int n,a[100];

	printf("How many number you want to store : ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&a[i]);
	}
	printf("\n Even number : ");

	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d  ",a[i]);
		}
	}

	printf("\n Odd number : ");

	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d  ",a[i]);
		}
	}
	return 0;
}