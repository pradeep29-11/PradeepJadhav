#include<stdio.h>
void Daimand(int x)
{
	for(int i=1;i<=x;i++)
	{
		for(int k=1;k<=x-i;k++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for(int i=x;i>=1;i--)
	{
		for(int k=1;k<=x-i;k++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
int main()
{
	int n;

	printf("Enter the number : ");
	scanf("%d",&n);

	Daimand(n);

	return 0;
}