/* Assigment : area and perimeter of rectangle
   Author    : pradeep jadhav
   Date      : 25/01/24
*/



#include<stdio.h>
int main()
{
	int length,width,area,perimeter;

	printf("enter the length of rectangle : ");
	scanf(" %d ",&length);

	printf("enter the  width of rectangle : ");
	scanf("%d",&width);

	area=length*width;                    //formula of area of ectangle

	perimeter=2*(length+width);          //formula of perimeter of rectangle

	printf("area of rectangle is %d \n width of rectangle is %d ",area,perimeter);

	return 0;
}