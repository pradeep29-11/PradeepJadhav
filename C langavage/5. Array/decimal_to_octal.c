#include<stdio.h>
int main()
{
	int num,i,a[100];

	printf("Enter the number : ");
	scanf("%d",&num);
	i=0;
	while(num>0)
	{
		for(i=0;i<num;i++)
		{
			a[i]=num%8;
			i++;
			num=num/8;
		}
		i--;

		while(i>=0)
		{ 
			printf("%d",a[i]);
			i--;
		}

	}
	return 0;
}