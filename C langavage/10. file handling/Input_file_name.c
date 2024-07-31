#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;

	char name[50];

	printf("Enter the file name : ");
	scanf("%s",&name);

	p=fopen(name,"r");

	if(p==NULL)
	{
		printf("Unable to open the file !!\n");
		exit(0);
	}

	fclose(p);

	printf("Work done !!");
	return 0;
}