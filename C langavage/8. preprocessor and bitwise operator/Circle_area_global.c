#include<stdio.h>
#include "demo.h"
#define PI 3.14
int main()
{
	int r;
	float area;
	pradeepf("Enter the radius of the circle : ");
	scanf("%d",&r);

	area=PI*r*r;

	pradeepf("Arae o fthe circle : %f ",area);
}