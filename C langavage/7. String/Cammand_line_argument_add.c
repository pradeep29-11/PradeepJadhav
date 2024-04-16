#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int sum;
	if(argc==1)
	{
		printf("There is no input from user!");
		exit(0);
	}
	sum=0;

	for(int i=1;i<argc;i++)
	{
		sum=sum+atoi(argv[i]);
	}

	printf("Sum of number : %d ",sum);
	return 0;
}