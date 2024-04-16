/*  
		Program to accept age of a candidate and determine whether
		the candidate is eligible for casting his own vote not.
*/
#include<stdio.h>
int main()
{
	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	if(num>=18)
	{
		printf("Candidate is eligible for Vote !!");
	}
	else
	{
		printf("Candiste is not eligible for vote !! ");
	}
	return 0;
}