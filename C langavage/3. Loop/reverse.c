#include<stdio.h>
int main()
{
	int num,rev,ans;

	printf("Enter the number : ");
	scanf("%d",&num);
	rev=0;
	while(num>0)
	{
		ans=(num%10);
		rev=(rev*10)+ans;
		num=num/10;
	}
	printf("reverse number is %d ",rev);
	return 0;
}