#include<stdio.h>

void Right_angle(int x)
{
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}

void Mirror_right_angle(int x)
{
	for(int i=x;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

void Left_angle(int x)
{
	for(int i=1;i<=x;i++)
	{
		for(int k=1;k<=x-i;k++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{

			printf("*");
		}
		printf("\n");
	}
}

void Mirror_left_angle(int x)
{
	for(int i=x;i>=1;i--)
	{
		for(int k=1;k<=x-i;k++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
void Diamond(int x)
{
	
	for(int i=1;i<=x;i++)
	{
		for(int k=1;k<=x-i;k++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for(int i=x;i>=1;i--)
	{
		for(int k=1;k<=x-i;k++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
int main()
{
	int n;

	printf("Enter the number : ");
	scanf("%d",&n);

	Right_angle(n);

	printf("\n\n");

	Mirror_right_angle(n);

	printf("\n\n");

	Left_angle(n);

    printf("\n\n");	
  
	Mirror_left_angle(n);

	printf("\n\n");

	Diamond(n);

	return 0;
}