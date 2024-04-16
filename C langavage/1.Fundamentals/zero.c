/*   Asssigment :last digit of a number stored in a varibale as zero
     Author     : pradeep jadhav
     Date       : 28/01/24
*/
#include<stdio.h>
int main()
{
		int num;

		printf("enter the number : ");
		scanf("%d",&num);

		int ans;
		ans=(num/10)*10;

		printf("last digit number store as zero %d",ans);
	return 0;
}