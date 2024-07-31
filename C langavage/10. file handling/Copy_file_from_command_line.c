#include<stdio.h>
#include<stdlib.h>
int main(int agc,char *agv[])
{
	FILE *rp;
	FILE *wp;

	char line[50];
	if(agc<3)
	{
		printf("Invalid no of the argument !!\n");
		exit(0);
	}
	rp=fopen(agv[1],"r");

	if(rp==NULL)
	{
		printf("Uable yo open the file !!");
		exit(0);
	}

	wp=fopen(agv[2],"w");

	if(wp==NULL)
	{
		printf("Uable to open the file !!");
		exit(0);
	}

	while(fgets(line,sizeof(line),rp))
	{
		fputs(line,wp);
	}

	
	fclose(rp);
	fclose(wp);

	printf("File is sucessfuly copy !!");
	return 0;
}