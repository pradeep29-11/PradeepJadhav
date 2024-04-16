#include<stdio.h>
int main()
{
	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	if(num>0)
	{
		printf("%d is natural number ",num);
	}
	else
		printf("%d is not natrual number ",num);
	return 0;
}