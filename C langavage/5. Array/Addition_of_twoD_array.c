#include<stdio.h>
int main()
{
	int a[30][30],b[30][30],sum[30][30],r,c;

	printf("How many rows : ");
	scanf("%d",&r);

	printf("How many columns : ");
	scanf("%d",&c);


	printf("matrix 1 :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter the data : ");
			scanf("%d",&a[i][j]);
		}
	}

	printf("matrix 2 :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter the data : ");
			scanf("%d",&b[i][j]);
		}
	}

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}

	printf("Matrix 1 :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}

	printf("Matrix 2 :\n");

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}

	printf("Addition of matrix :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d  ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}