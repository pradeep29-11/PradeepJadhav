#include<stdio.h>
int main()
{
	float amount,price;
	int usd;

	printf("enter the 1 usd price :");
	scanf("%f",&price);

	printf("how many usd you have");
	scanf("%d",&usd);

	amount=usd*price;

	printf("the amount oin india : %f",amount);

	return 0 ;

}