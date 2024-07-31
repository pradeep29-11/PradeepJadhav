#include<iostream>
using namespace std;
int subtract(int x=0,int y=0)
{
	return x-y;
}
float subtract(float a=0.0,float b=0.0)
{
	return a-b;
}
int main()
{
	int a;
	float b;

	a=subtract(5,10);
	b=subtract(5.5,4.5F);

	printf("Subtraction int   :%d\n",a);

	printf("Subtraction float : %f",b);
	return 0;
}