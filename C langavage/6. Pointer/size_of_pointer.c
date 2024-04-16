#include<stdio.h>
int main()
{
	int n=10;
	int *p=&n;
	char ch='a';
	char *a=&ch;
	float f=6.7;
	float *z=&f;

	printf("int            : %d byets\n",sizeof(*p));
	printf("charcter 	   : %d byets\n",sizeof(*a));
	printf("float    	   : %d byets\n",sizeof(*z));

	printf("Adderes int      %d byets\n",sizeof(p));
	printf("Adderes charcter %d byets\n",sizeof(a));
	printf("Adderes float    %d byets\n",sizeof(z));
	
	return 0;
}