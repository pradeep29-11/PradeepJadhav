#include<stdio.h>
int main()
{
	int i,n;

	printf("How many time : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d : TCA\n",i);
		i++;
	}
	return 0;
}