#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	char name[50],ch;
	int vcount;

	printf("Enter the file name :");
	scanf("%s",name);

	p=fopen(name,"r");

	if(p==NULL)
	{
		printf("Uable to open the file ");
		exit(0);
	}
	vcount=0;
	while(1)
	{
		ch=fgetc(p);
		if(ch==EOF)
		{
			break;		
		}
		if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
		{
			vcount++;
		}
	}
	printf("Vowel : %d",vcount);

	fclose(p);


	return 0;
}