/* Assigment : accept initial velocity (u) , acceleration (a), and time(t) print the final velcity
  Author     : pradeep jadhav
  Date       : 25/01/24
*/
#include<stdio.h>
int main()
{
	int u,a,t,v;

	printf("enter the initial velocity");  
	scanf(" %d ",&u);                         //u= initial velocity

	printf("enter the acceleration");
	scanf("%d ",&a);                        // a=accelration

	printf("enter the time");
	scanf(" %d ",&t);                       //  t=time

	v=u+a*t;                              // formula of final velocity(v)

	printf("final velocity is %d",v);

	return 0;
}