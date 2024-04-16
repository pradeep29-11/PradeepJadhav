#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	char *p;
	int cnt;

	printf("Enter the large string ");
	gets(s1);

	printf("Enter the small string : ");
	gets(s2);

	cnt=0;
	p=s1;
	while(1)
	{
		p=strstr(p,s2);

		if(p==NULL)
		{
			break;
		}
		cnt++;
		p++;
	}
	

	printf("%s is found %d time",s2,cnt);
	return 0;
}