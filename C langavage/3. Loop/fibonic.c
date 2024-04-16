#include<stdio.h>
int main()
{
	int num,f1,f2,f3;

	printf("How many number you want fibonic : ");
	scanf("%d",&num);

	f1=1;
	f2=0;
	printf("Fibonic number : ");
	for(int i=1;i<=num;i++)
		{
		f3=f1+f2;
		printf("%d ",f3);
		f1=f2;
		f2=f3;
		
	}
	return 0;
}