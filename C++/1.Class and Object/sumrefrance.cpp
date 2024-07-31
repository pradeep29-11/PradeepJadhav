#include<iostream>
using namespace std;
 void sum( float &a, float &b)
{	float p=a+b;
	cout<<p <<endl;
}
int main()
{
	float x,y;
	cout<<"enter the first number: ";
	cin>>x;
	cout<<"enter the second number: ";
	cin>>y;
	sum(x,y);
	return 0;
}