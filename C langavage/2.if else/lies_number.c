/* Accept three numbers from the user and check whether third number is lies in 
   between first two numbers or not. 
*/

#include<stdio.h>
int main()
{
	int num1,num2,num3;

	printf("Enter the first number : ");
	scanf("%d",&num1);

	printf("Enter the second number : ");
	scanf("%d",&num2);

	printf("Enter the third mumber : ");
	scanf("%d",&num3);

	if(num1>num3 && num3>num2)
	{
		printf("Number lies between two number !! ");
	}
	else if(num1<num3 && num3<num2)
	{
		printf("Number lies between two number !! ");
	}
	else
		printf("Number not lies between first two number !! ");
	return 0;
}