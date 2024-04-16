#include<stdio.h>

int Area(int x,int y)
{
	int ans;

	ans=x*y;

	return ans;
}

int main()
{
	int length,breadth,area;

	printf("Enter the length : ");
	scanf("%d",&length);

	printf("Enter the breadth : ");
	scanf("%d",&breadth);

	area=Area(length,breadth);

	printf("Area of rectangle : %d ",area);

	return 0;
}