/* Assigment : surface area and volume of cylinder
   Author    : pradeep jadhav
   Date      : 25/01/24
*/

#include<stdio.h>
#define PI 3.14
int main()
{
	int radius,height,surface_area,volume;
	
	printf("enter the radius of cylinder : ");
	scanf("%d",&radius);

	printf("enter the height of cylinder");
	scanf("%d",&height);

	surface_area=(2*PI*radius*2)+(2*PI*radius*height);       // formula of surface area of cylinder

	volume=PI*radius*radius*2*height;                     // formula of volume of cylinder

	printf("surface area of cylinder is %d \n volume of cylinder is %d",surface_area,volume);
	return 0;
}