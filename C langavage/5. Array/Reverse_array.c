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
	printf("\n Array in reverse : ");

	for(int i=n-1;i>=0;i--)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}