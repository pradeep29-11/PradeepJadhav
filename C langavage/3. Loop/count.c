#include<stdio.h>
int main()
{
	int num,rev,ans;

	printf("Enter the number : ");
	scanf("%d",&num);

	ans=0;
	while(num>0)
	{
		rev=num%10;
		num=num/10;
		ans=ans+1;
	}
	printf("count is %d ",ans);
	return 0;
}