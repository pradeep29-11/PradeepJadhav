#include<stdio.h>
int main()
{
	float num1,num2,ans;

	printf("Enter the first number : ");
	scanf("%f",&num1);

	printf("enter the second number : ");
	scanf("%f",&num2);

	if(num2==0)
	{
		printf("error : ");
	}
	else
	{

		ans=num1/num2;
		printf("Division : %f",ans);
	}
	return 0;
}