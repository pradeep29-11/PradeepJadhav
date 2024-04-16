#include<stdio.h>
int main()
{
	int lw,up;

	printf("Enter the lower limit : ");
	scanf("%d",&lw);

	printf("Enter the uper limit : ");
	scanf("%d",&up);

	if(lw<up)
	{
		printf("number are : ");
		for(int i=lw;i<=up;i++)
		{
			printf("%d ",i);
		}
	}
	else
	{
		printf("lower limt is not smaler then uper limit !!");
	}
	return 0;
}