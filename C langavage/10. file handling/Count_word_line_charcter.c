#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	char name[50],ch;
	int ccount,wcount,lcount;

	printf("Enter the file name : ");
	scanf("%s",&name);

	p=fopen(name,"r");

	if(p==NULL)
	{
		printf("Unable to open the file !!\n");
		exit(0);
	}
	ccount=0;
	wcount=0;
	lcount=0;
	while(1)
	{
		ch=fgetc(p);

		if(ch==EOF)
		{
			break;
		}
		ccount++;
		if(ch==' '||ch=='\t')
		{
			wcount++;
		}
		else if(ch=='\n')
		{
			wcount++;
			lcount++;
		}
		        
	}

	printf("Word in the file     : %d\n",wcount);
	printf("Line in the file     : %d\n",lcount);
	printf("Charcter in the file : %d\n",ccount);

	fclose(p);
		
	return 0;
}