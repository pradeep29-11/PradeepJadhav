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
	pos=ftell(fp);
	fseek(fp,3,SEEK_SET);

	//ch=fgetc(fp);
	//printf("Charcter : %c\n",ch);


	printf("Position : %d\n",pos);
	fseek(fp,-2,SEEK_END);

	//ch=fgetc(fp); 
	//printf("Charcter : %c\n",ch);

	fseek(fp,-1,SEEK_CUR);
	ch=fgetc(fp);
	printf("Charcter : %c\n",ch);

	fclose(fp);
}