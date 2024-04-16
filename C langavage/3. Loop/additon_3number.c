#include<stdio.h>
int main()
{
	int n,m,ans;

	printf("How many  number : ");
	scanf("%d",&n);

	ans=0;

	for(int i=1;i<=n;i++)
	{
		printf("Enter the number : ");
		scanf("%d",&m);

		ans=ans+m;
	}
	printf("addition of number is %d",ans);

	return 0;
}