/*  Assigment : print unit of a given number 
	Author    : pradeep jadhav
	Date      : 28/01/24
*/
#include<stdio.h>
int main()
{
	int num=2397;
	int digit=num%10;

	printf("number is %d\n ",num);
	printf("last digit of the number is %d",digit);
	return 0;
}