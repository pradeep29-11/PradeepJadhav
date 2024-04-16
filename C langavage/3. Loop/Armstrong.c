#include<stdio.h>
int main()
{
	int num,num1,rev,ans;

	printf("Enter the number : ");
	scanf("%d",&num);

	num1=num;
	ans=0;

	while(num>0)
	{
		rev=num%10;
		ans=ans+(rev*rev*rev);
		num=num/10;
	}
	if(num1==ans)
	{
	printf("Given number %d is Armstrong !!",ans);
	}
	else
	{
		printf("Given number %d is not Armstrong !!",ans);
	}
	return 0;
}