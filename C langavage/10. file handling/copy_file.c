#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *rfp;
	FILE *wfp;
	char rname[50],wname[50],line[50];

	printf("Enter the file name to read : ");
	gets(rname);

	rfp=fopen(rname,"r");
	if(rfp==NULL)
	{
		printf("Uable to open the file !!");
		exit(0);
	}
	printf("Enter the file to copy : ");
	gets(wname);

	wfp=fopen(wname,"w");
	if(wfp==NULL)
	{
		printf("Uable to open the file !!");
		exit(0);
	}
	while(fgets(line,sizeof(line),rfp))
	{
		fputs(line,wfp);
	}

	fclose(rfp);
	fclose(wfp);
	printf("File is succefuly copy !!");
	return 0;
}