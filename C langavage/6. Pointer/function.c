#include<stdio.h>
void accept(int x[],int y)
{
	for(int i=0;i<y;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&x[i]);
	}
}
void display(int x[],int y)
{
	for(int i=0;i<y;i++)
	{
		printf("%d  ",x[i]);
	}
}
int main()
{
	int n;
	int p[10];

	printf("How many number you want to store : ");
	scanf("d",&n);

	accept(p,n);
	printf("Array :\n");
	display(p,n);
	return 0;
}