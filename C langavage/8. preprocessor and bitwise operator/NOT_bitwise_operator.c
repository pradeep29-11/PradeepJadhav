#include<stdio.h>
int main()
{
	int n,ans;

	printf("Enter the number : ");
	scanf("%d",&n);

	ans=~n;

	printf("Negation of %d is %d ",n,ans);
	return 0;
}