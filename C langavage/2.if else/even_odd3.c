#include<Stdio.h>
int main()
{
	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	if(num%2)
	{
		printf("%d is odd number ",num);
	}
	else
	{
		printf("%d is even number ",num);
	}
	return 0;
}