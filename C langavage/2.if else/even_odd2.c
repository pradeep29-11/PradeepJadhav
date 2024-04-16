#include<stdio.h>
int main()
{
	int num,ans;

	printf("Enter the number : ");
	scanf("%d",&num);

	ans=num%2;

	if(ans==0)
	{
		printf("%d is even number ",num);
	}
	else
	{
		printf("%d is odd even ",num);
	}
	return 0;
}