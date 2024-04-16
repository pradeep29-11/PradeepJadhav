#include<stdio.h>

int factoril(int x)
{
	int ans;

	ans=1;

	for(int i=1;i<=x;i++)
	{
		ans=ans*i;
	}
	return ans;

}
int main()
{
	int num,ans;

	printf("Enter the number : ");
	scanf("%d",&num);

	ans=factoril(num);

	printf("factoril of number : %d",ans);
	return 0;
}