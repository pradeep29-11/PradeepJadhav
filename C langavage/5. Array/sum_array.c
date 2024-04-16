#include<stdio.h>
void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the data %d ",i+1);
		scanf("%d",&a[i]);
	}
}
void sum(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of Array : %d ",sum);
}
int main()
{
	int a[100],n;

	printf("How many number you want : ");
	scanf("%d",&n);

	accept(a,n);
	
	sum(a,n);
	
	
}