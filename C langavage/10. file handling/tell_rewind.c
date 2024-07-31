#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char rname[50],ch;
	int pos;

	printf("Enter the file name to read :");
	scanf("%s",rname);

	fp=fopen(rname,"r");
	if(fp==NULL)
	{
		printf("Uable to open the file !!");
		exit(0);
	}
	ch=fgetc(fp);
	printf("charcter : %c\n",ch);
	pos=ftell(fp);

	printf("Position : %d\n",pos);

	rewind(fp);
	printf("charcter : %c\n",ch);
	pos=ftell(fp);

	printf("Position : %d\n",pos);
	fclose(fp);

}