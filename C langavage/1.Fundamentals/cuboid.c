/* Assigment : surface area of cuboid
   Author    : pradeep jadhav
   Date      : 25/01/24

 */
#include<stdio.h>
int main()
{ 
		float length,breadth,height,surface_area;

		printf("enter the length : ");
		scanf("%f",&length);

		printf("enter the breadth : ");
		scanf("%f",&breadth);

		printf("enter the height : ");
		scanf("%f",&height);

	    surface_area=2*(length*breadth+length*height+breadth*height);		//formula for surface area

	    printf("surface areais %.2f",surface_area);


	return 0;
}