#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *wp;
	FILE *rp;
	char wname[50];
	char rname[50];
	int n;
	char b;
	printf("Enter the file name : ");
	//gets(rname);
	scanf("%s",rname);
	rp=fopen(wname,"r");
	if(rp==NULL)
	{
		printf("Uable to open the file !!");
		exit(0);
	}

	printf("Enter the file name to copy !!");
	gets(wname);

	wp=fopen(wname,"wb");
	while(1)
	{
		n=fread(&b,sizeof(b),1,rp);
		if(n==0)
		{
			break;
		}
		fwrite(&b,sizeof(b),1,wp);
	}
	fclose(rp);
	fclose(wp);

	printf("%s is copied in %s",rname,wname);

		return 0;
}