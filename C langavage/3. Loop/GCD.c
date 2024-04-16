#include<stdio.h>
int main()
{
	int num1,num2;

	printf("Enter the number : ");
	scanf("%d",&num1);

	printf("Enter the number : ");
	scanf("%d",&num2);

	while(num1!=num2)
	{
		if(num1>num2)
		{
			num1=num1-num2;
		}
		else
		{
			num2=num2-num1;
		}
	}
	printf("GCD is %d ",num1);
	return 0;
}