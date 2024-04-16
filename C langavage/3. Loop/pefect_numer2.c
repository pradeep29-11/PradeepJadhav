#include<stdio.h>
int main()
{
	int ans;

	for(int num=1;num<500;num++)
	{
		int ans=0;
		for(int i=1;i<num;i++)
		{
			if(num%i==0)
			{
				ans=ans+i;
			}
		}
		if(ans==num)
		{
		printf("%d is perfect number ",num);
	}
	}
	return 0;
}