#include<iostream>
using namespace std;
int main()
{
	int a,b;

	cout<<"Enter the first number : ";
	cin>>a;

	cout<<"Enter the second number : ";
	cin>>b;

	try
	{
		if(b!=0)
		{
			float ans;
			ans=a/b;

			cout<<"Divide : "<<ans<<endl;
		}
		else
		{
			throw(b);
		}
	}
	catch(int x)
	{
		cout<<"Error"<<endl;
		cout<<"number is "<<a;
	}
	return 0;
}