#include<stdio.h>
int main()
{
	int num,ans,rev;

	printf("Enter the number : ");
	scanf("%d",&num);

	ans=num;
	rev=0;
	while(num>0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	if(ans==rev)
	{
		printf("given number %d is palindrom !! ",ans);
	}
	else
	{
		printf("given number %d is not palindrom !! ",ans);
	}
	return 0;
}