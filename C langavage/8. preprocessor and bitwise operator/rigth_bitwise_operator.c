#include<stdio.h>
int main()
{
	int n,m,ans;

	printf("Enter the first number : ");
	scanf("%d",&n);

	printf("Enter the second number : ");
	scanf("%d",&m);

	ans=n>>m;

	printf("Divide : %d",ans);
	return 0;
}