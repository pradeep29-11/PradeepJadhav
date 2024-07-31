#include<iostream>
using namespace std;

template<class t>
int maximum(t &x,t &y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a,b,ans;

	cout<<"Enter the first number : ";
	cin>>a;

	cout<<"Enter the second number : ";
	cin>>b;

	ans=maximum<int>(a,b);

	cout<<"Greater number : "<<ans<<endl;

	return 0;
}