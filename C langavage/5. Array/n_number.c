#include<stdio.h>
int main()
{
	int a[100],n;

	printf("How many number you want : ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&a[i]);
	}

	printf("\n Your Data : ");

	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}


	return 0;
}