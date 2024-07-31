#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	char name[50];
	char line[50];
	printf("Enter the name of the file : ");
	gets(name);

	p=fopen(name,"r");

	if(p==NULL)
	{
		printf("Unable to open the file !!");
		exit(0);

	}

	while(fgets(line,sizeof(line),p))
	{
		printf("%s",line);
	}

	fclose(p);
	return 0;
}