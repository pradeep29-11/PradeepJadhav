/*	Assigment : sum of the digit
	Author    : pradeep jadhav
	Date      :29/01/
*/
#include<stdio.h>
int main()
{
	int num,first_num,second_num,third_num,sum;

	printf("enter the three digit number : ");
	scanf("%d",&num);

	first_num=num/100;
	second_num=(num%100)/10;
	third_num=num%10;

	sum=first_num+second_num+third_num;

	printf("sum of all digit is %d",sum);
	return 0;
}