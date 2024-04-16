#include<stdio.h>
int main()
{
	int r,c,a[100][300];

	printf("How many rows : ");
	scanf("%d",&r);

	printf("How many column : ");
	scanf("%d",&c);

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter the data : ");
			scanf("%d",&a[i][j]);
		}
	}

	printf("Orignal matrix :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose Matrix :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d  ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}