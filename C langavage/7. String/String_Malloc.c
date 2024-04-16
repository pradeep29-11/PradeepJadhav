#include<stdio.h>
#include<stdlib.h>
void count_of_Vowel(char ch[],int n)
{
	int a_cnt;
	int e_cnt;
	int i_cnt;
	int o_cnt;
	int u_cnt;

	a_cnt=0;
	e_cnt=0;
	i_cnt=0;
	o_cnt=0;
	u_cnt=0;

	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='A' || ch[i]=='a')
		{
			a_cnt++;
		}
		else if(ch[i]=='E'||ch[i]=='e')
		{
			e_cnt++;
		}
		else if(ch[i]=='I'||ch[i]=='i')
		{
			i_cnt++;
		}
		else if(ch[i]=='O'||ch[i]=='o')
		{
			o_cnt++;
		}
		else if(ch[i]=='U'||ch[i]=='u')
		{
			u_cnt++;
		}
	}
	printf("A Occurs %d times\n",a_cnt);
	printf("E Occurs %d times\n",e_cnt);
	printf("I Occurs %d times\n",i_cnt);
	printf("O Occurs %d times\n",o_cnt);
	printf("U Occurs %d times\n",u_cnt);
}
int main()
{
	int n;
	char *p;

	printf("How many Charcter you want to store : ");
	scanf("%d",&n);

	p=(char *)malloc(n*sizeof(char));

	printf("Enter the charcter : ");
	scanf("%s",p);

	count_of_Vowel(p,n);

	free(p);

	return 0;
}