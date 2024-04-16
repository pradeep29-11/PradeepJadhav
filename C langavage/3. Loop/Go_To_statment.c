#include<stdio.h>
int main()
{
	int i;

	i=1;

	TCA:printf("Hello : \n");
	i++;
	if(i<=5)
	{
		goto TCA;
	}
	printf("Byee :\n ");

	return 0;
}