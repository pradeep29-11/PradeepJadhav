#include<stdio.h>
#include<stdlib.h>
void accept(int p[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&p[i]);
	}
}
void display(int p[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d  ",p[i]);
	}
}
int main()
{
	int n;
	int *p;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Unable to allocate memory !!");
		exit(0);
	}
	accept(p,n);

	printf("Array :\n");
	display(p,n);

	return 0;
}