/*Write a menu driven c++ program to create a FUNCTION template 
a) To find maximum of two numbers b) To find minimum of two numbers*/

#include<iostream>
using namespace std;

template<class tp>
tp maximumnumber(tp x,tp y)
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
template<class sp>
sp minimumnumber(sp x,sp y)
{
	if(x>y)
	{
		return y;
	}
	else
	{
		return x;
	}
}
int main()
{
	while(1)
	{
		int x;

		cout<<"------------------Option------------------"<<endl;
		cout<<"1. Maximum of two number int "   <<endl;
		cout<<"2. Maximum of two number float "<<endl;
		cout<<"3. Minimum of two number int "  <<endl;
		cout<<"4. Minimum of two number float "<<endl;
		cout<<"0. exist                       "<<endl;

		cout<<"Select the option : ";
		cin>>x;

		switch(x)
		{
		case 1:
				int a,b,max;
				cout<<"Enter the first number : ";
				cin>>a;

				cout<<"Enter the second number : ";
				cin>>b;

				max=maximumnumber<int>(a,b);
				cout<<"Maximum number is : "<<max<<endl;
				break;

		case 2:
				float x,y,maxi;
				cout<<"ENter the first number : ";
				cin>>x;

				cout<<"Enter the second number : ";
				cin>>y;

				maxi=maximumnumber<float>(x,y);
				cout<<"Maximum number is : "<<maxi<<endl;
				break;

		case 3:
				int c,d,mini;
				cout<<"Enter the first number : ";
				cin>>c;

				cout<<"Enter the second number : ";
				cin>>d;

				mini=minimumnumber<int>(c,d);
				cout<<"Minimum number is : "<<mini<<endl;
				break;

		case 4:
				float m,n,min;
				cout<<"Enter the first number : ";
				cin>>m;

				cout<<"Enter the second number : ";
				cin>>n;

				min=minimumnumber<float>(m,n);
				cout<<"Minimum number is : "<<min<<endl;
				break;
		case 0:
				exit(0);
				break;

		default:
				cout<<"Invalid option !!"<<endl;
				break;

		}
	}

	return 0;
}