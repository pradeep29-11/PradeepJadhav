/* Asiigment : Area and circumference of circle
   Author    : pradeep jadhav
   Date      : 25/01/24
*/

#include<stdio.h>
//#deifine PI 3.14
int main()
{
	int radius,area,circumferance;
	const float PI=3.14;

	printf("enter the radius of circle");
	scanf("%d",&radius);

	area=PI*radius*radius;

	circumferance=2*PI*radius;

	printf("area of circle is %d \n circumferance of circle is %d ",area,circumferance);


	return 0;
} 