#include<stdio.h>
int main()
{
	int num,sum;
	sum=0;
	for(; ;)
	{
		printf("Enter the number : ");
		scanf("%d",&num);

		if(num<0)
		{
			break;
		}
		sum=sum+num;
	}
	printf("sum of number : %d",sum);
	return 0;
}