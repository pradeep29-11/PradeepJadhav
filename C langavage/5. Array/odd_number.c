#include<stdio.h>
void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	printf("data : ");
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]%2!=0)
		{
			printf("%d ",a[i]);
		}
		
	}
}
int main()
{
	int a[100],n;

	printf("How many number you want : ");
	scanf("%d",&n);
	accept(a,n);

	display(a,n);

	return 0;
}