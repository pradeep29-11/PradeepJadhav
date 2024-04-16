#include<stdio.h>

void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&a[i]);
	}
}

void display(int a[],int n)
{
	printf("Array element : ");

	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void display_reverse(int a[],int n)
{
	printf("\n Reverse element : ");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}

void display_even_number(int a[],int n)
{
	printf("\n Even number : ");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
}

void display_postive_number(int a[],int n)
{
	printf("\n Positive number : ");
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			printf("%d ",a[i]);
		}
	}
}

void display_even_index(int a[],int n)
{
	printf("\n Even index number : ");
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",a[i]);
		}
	}
}

void display_max(int a[],int n)
{
	int max;
	max=a[0];

	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\n maximun number : %d ",max);
}

void display_min(int a[],int n)
{
	int min;
	min=a[0];

	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\n Minimum number : %d ",min);
}

void display_negative_element(int a[],int n)
{
	printf("\n Negative elment : ");
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
}

void display_divisible_by_five(int a[],int n)
{
	printf("\n Divisible by five element : ");

	for(int i=0;i<n;i++)
	{
		if(a[i]%5==0)
		{
			printf("%d ",a[i]);
		}
	}
}

int main()
{
	int a[100],n;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	accept(a,n);

	display(a,n);

	display_reverse(a,n);

	display_even_number(a,n);

	display_postive_number(a,n);

	display_even_index(a,n);

	display_max(a,n);

	display_min(a,n);

	display_negative_element(a,n);

	display_divisible_by_five(a,n);

	return 0;
}