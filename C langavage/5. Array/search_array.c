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
	printf("\nArray : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int search(int a[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int a[100];
	int n;
	int pos;
	int key;

	printf("how many element you want : ");
	scanf("%d",&n);

	accept(a,n);
	display(a,n);

	printf("\nEnter the number to serah : ");
	scanf("%d",&key);

	pos=search(a,n,key);

	if(pos==-1)
	{
		printf("%d is not found in array ! ",key);
	}
	else
	{
		printf("%d is found at %d position : ",key,pos);
	}
	return 0;
}