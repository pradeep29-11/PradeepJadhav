#include<stdio.h>

int Area(float x)
{
	float area;
	area=3.14*x*x;

	return area;
}
int main()
{
	float radius,ans;

	printf("Enter the the radius : ");
	scanf("%f",&radius);

	ans=Area(radius);

	printf("Area of Circle : %f",ans);
	return 0;
}