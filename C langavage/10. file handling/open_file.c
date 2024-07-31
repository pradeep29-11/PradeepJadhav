#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *p;

	p=fopen("a.txt","r");

	if(p==NULL)
	{
		printf("Unable toe the file !!\n");
		exit(0);
	}

	fclose(p);

	printf("Work done\n");

	return 0;
}