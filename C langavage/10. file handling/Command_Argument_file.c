#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *ch[])
{
	FILE *p;

	p=fopen("ch[0]","r");

	if(p==NULL)
	{
		printf("Unable to open file!!\n");
		exit(0);
	}

	fclose(p);

	printf("Work done ");

	return 0;
}