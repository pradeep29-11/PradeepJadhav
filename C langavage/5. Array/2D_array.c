#include<stdio.h>
int main()
{
	int c,r,a[30][50];

	printf("How many row you want in array : ");
	scanf("%d",&r);

	printf("How many column you want in array : ");
	scanf("%d",&c);

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter the data : ");
			scanf("%d",&a[i][j]);
		}
	}

	printf("Array : \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}