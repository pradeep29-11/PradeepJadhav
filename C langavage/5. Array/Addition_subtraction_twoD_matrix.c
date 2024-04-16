#include<stdio.h>

void accept(int a[30][30],int c,int r)
{
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("Enter the data : ");
			scanf("%d",&a[i][j]);
		}
	}
}

void display(int a[30][30],int c,int r)
{
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
}
void add(int a[30][30],int b[30][30],int sum[30][30],int c,int r)
{
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");
	}
}

void subtraction(int a[30][30],int b[30][30],int sub[30][30],int c,int r)
{
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
		printf("\n");
	}
}
int main()
{
	int a[30][30],b[30][30],sum[30][30],sub[30][30],r,c;

	printf("How many columns : ");
	scanf("%d",&c);

	printf("How many rows : ");
	scanf("%d",&r);

	printf("First Matrix : \n");
	accept(a,c,r);

	printf("Second Matrix : \n");
	accept(b,c,r);

	add(a,b,sum,c,r);
	subtraction(a,b,sub,c,r);

	printf("\nFirst Matrix : \n");
	display(a,c,r);

	printf("\nSecond Matrix : \n");
	display(b,c,r);

	printf("\nAddtion of Two matrix :\n");
	display(sum,c,r);

	printf("\nSubtraction of Two matrix :\n");
	display(sub,c,r);


}