#include<stdio.h>
int main()
{
	float radius,area;

	printf("enter the radius of circle : ");
	scanf("%f",&radius);

	area=3.14*radius*radius;

	printf("area of circle is %.2f ",area);
	return 0;
}