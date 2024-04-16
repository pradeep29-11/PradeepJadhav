/* 	Assigment : Append a digit in the number and print the rsulting number
	Author    : pradeep jadhav
	Date      :28/01/24
*/
#include<stdio.h>
int main()
{
	int num,digit;
	
	printf("enter the number : ");
	scanf("%d",&num);

	printf("enter the last digit of number :");
	scanf("%d",&digit);
	

	int ans=(num*10)+digit;

	printf("resulting number is %d",ans);

	return 0;
}