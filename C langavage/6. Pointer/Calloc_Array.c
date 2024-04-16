#include<stdio.h>
#include<stdlib.h>
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
int main()
{
	int n;
	int *p;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	p=(int *)calloc(n,sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory !");
		exit(0);
	}

	accept(p,n);

	printf("Array :\n");
	display(p,n);

	free(p);
	return 0;
}
