#include<stdio.h>
int main()
{
	char n[100];
	int acnt,ecnt,icnt,ocnt,ucnt;

	printf("Enter the string : ");
	gets(n);

	acnt=0;
	ecnt=0;
	icnt=0;
	ocnt=0;
	ucnt=0;
	for(int i=0;n[i]!='\0';i++)
	{
		if(n[i]=='A'||n[i]=='a')
		{
			acnt++;
		}
		else if(n[i]=='E' ||n[i]=='e')
		{
			ecnt++;
		}
		else if(n[i]=='I'||n[i]=='i')
		{
			icnt++;
		}
		else if(n[i]=='O'||n[i]=='o')
		{
			ocnt++;
		}
		else if(n[i]=='U'||n[i]=='u')
		{
			ucnt++;
		}
		else 
		{
		}
	}
	printf("A vowel count : %d\n",acnt);
	printf("E vowel count : %d\n",ecnt);
	printf("I vowel count : %d\n",icnt);
	printf("O vowel count : %d\n",ocnt);
	printf("U vowel count : %d\n",ucnt);
	return 0;
}