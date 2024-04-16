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
	printf("\n Array : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int search(int a[],int n,int key)
{
	int count;
	count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a[100];
	int n;
	int key;
	int count;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	accept(a,n);
	display(a,n);

	printf("\nEnter the number to search : ");
	scanf("%d",&key);
	count=search(a,n,key);

	printf("%d is found %d time in array ",key,count);
	return 0;
}