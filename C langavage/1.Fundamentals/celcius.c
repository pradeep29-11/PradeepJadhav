   /*
   Assigment : fahremnheit to celcius
   Author    : pradeep jadhav
   Date      : 22-01-24

 */

#include<stdio.h>
int main()
{ 
	float fahrenheit,celcius;

	printf("enter the temparature : ");
	scanf("%f",&fahrenheit);

	celcius=5.0/9*(fahrenheit-32);

	printf("celcius of %.2f is %.2f %%", fahrenheit,celcius);

	return 0;;

	
}