#include<Stdio.h>
int main()
{
	int a,b,ans;

	printf("Enter the first number : ");
	scanf("%d",&a);

	printf("Enter the second number : ");
	scanf("%d",&b);

	ans=a||b;

	printf("OR : %d",ans);
	return 0;
}