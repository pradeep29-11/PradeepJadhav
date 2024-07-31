#include<stdio.h>
int main()
{
	int  n,ans,m;

	printf("Enter the first number : ");
	scanf("%d",&n);
	getchar();

	printf("Enter the second number : ");
	scanf("%d",&m);

	ans=n<<m;

	printf("Square : %d",ans);
	return 0;
}