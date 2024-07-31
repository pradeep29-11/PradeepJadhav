#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rno;
	char name[50];
	float per;
};
int main()
{
	FILE *fp;
	int n;
	struct student s;

	fp=fopen("student.txt","r");
	if(fp==NULL)
	{
		printf("Unable to open the file !!");
		exit(0);
	}
	while(1)
	{
		n=fscanf(fp,"%d %s %f",&s.rno,s.name,&s.per);
		if(n==-1)
		{
			break;
		}

		printf("%d %s %.2f \n",s.rno,s.name,s.per);
	}

	fclose(fp);
	
	return 0;
}