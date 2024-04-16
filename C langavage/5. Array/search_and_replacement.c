#include<Stdio.h>
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
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void search(int a[],int n,int key,int rep)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			a[i]=rep;
		}

	}
	display(a,n);
}
int main()
{
	int a[100];
	int n;
	int rep;
	int key;

	printf("How many number you want : ");
	scanf("%d",&n);

	accept(a,n);
	printf("\nArray before replacement : ");
	display(a,n);

	printf("\n Enter the number search : ");
	scanf("%d",&key);

	printf("Enter the number to replace : ");
	scanf("%d",&rep);

	search(a,n,key,rep);


	return 0;
}