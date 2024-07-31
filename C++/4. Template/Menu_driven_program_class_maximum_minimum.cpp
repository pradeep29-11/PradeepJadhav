/*Write a menu driven c++ program to create CLASS template 
a) To find maximum of two numbers b)To find minimum of two numbers*/

#include<iostream>
using namespace std;
template<class tp>
class Template
{
	tp x;
	tp y;
	tp z;
	public:
	Template(tp x,tp y)
	{
		this->x=x;
		this->y=y;
	}
	void Maximum()
	{
		if(x>y)
		{
			cout<<"Maximum number is : "<<x<<endl;
		}
		else
		{
			cout<<"Maximum number is : "<<y<<endl;
		}
	}
	void minimum()
	{
		if(x>y)
		{
			cout<<"Minimum number is : "<<y<<endl;
		}
		else
		{
			cout<<"Minimum number is : "<<x<<endl;
		}

	}
	~Template()
	{
		cout<<"Destroying the object memory "<<endl;
	}
};
int main()
{

	while(1)
	{
		int choice;
		cout<<"--------------option--------------"<<endl;
		cout<<"1. Maximum two number int   "<<endl;
		cout<<"2. Maximum two number float "<<endl;
		cout<<"3. Minimum two number int   "<<endl;
		cout<<"4. Minimum two number float "<<endl;
		cout<<"0. exit                     "<<endl;

		cout<<"Select the option : ";
		cin>>choice;

		switch(choice)
		{
		case 1:
			{
				int a,b;
				cout<<"Enter the first number : ";
				cin>>a;

				cout<<"Enter the second number : ";
				cin>>b;

				Template <int>ob(a,b);
				ob.Maximum();
				break;
			}
				
		case 2:
			{
				float x,y;
				cout<<"Enter the first number : ";
				cin>>x;

				cout<<"Enter the second number : ";
				cin>>y;

				Template <float>ob(x,y);
				ob.Maximum();
				break;
			}
		case 3:
			{
				int m,n;
				cout<<"Enter the first number : ";
				cin>>m;

				cout<<"Enter the second number : ";
				cin>>n;
				Template <int>ob(m,n);
				ob.minimum();
				break;
			}
		case 4:
			{
				float j,k;
				cout<<"Enter the first number : ";
				cin>>j;

				cout<<"Enter the second number : ";
				cin>>k;
				Template <float>ob(j,k);
				ob.minimum();
				break;
			}
		case 0:
				exit(0);
				break;
		default:
				cout<<"Invalid !!"<<endl;


		}
	}
	return 0;
}