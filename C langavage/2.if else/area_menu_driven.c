#include<stdio.h>
int main()
{
	char ch;

	printf("Whoes area do you want rectangle(R),traingle(T)andcircle(C) : ");
	scanf("%c",&ch);

	if(ch=='R')
	{
		int l,b,area;

		printf("Enter the length of rectangle : ");
		scanf("%d",&l);

		printf("Enter the breadth of rectangle : ");
		scanf("%d",&b);

		area=l*b;

		printf("area of recatngle is %d",area);
	}
	else if(ch=='T')
	{
		
		float b,h,area;
		printf("Enter the base of the traingle : ");
		scanf("%f",&b);

		printf("Enter the height of the traingle : ");
		scanf("%f",&h);

		area=b*h/2;

		printf("area of traingle is %f",area);

	}
	else if(ch=='C')
	{
		float r,area;
		printf("Enter the radius of circle : ");
		scanf("%f",&r);

		area=3.14*r*r;

		printf("area of circle is %f",area);
	}
	else
	{
		printf("invalid !!");
	}
	return 0;
}


