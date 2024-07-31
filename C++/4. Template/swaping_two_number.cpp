#include<iostream>
using namespace std;

template<class tp>
void change(tp &x,tp &y)
{
	tp z;

	z=x;
	x=y;
	y=z;

}
int main()
{
	int a,b;

	cout<<"Enter the first number : ";
	cin>>a;

	cout<<"Enter the second number : ";
	cin>>b;

	change<int>(a,b);

	cout<<"After swaping a : "<<a<<" b : "<<b<<endl;

	return 0;
}