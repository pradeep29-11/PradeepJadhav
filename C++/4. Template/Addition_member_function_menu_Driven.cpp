/*Write a menu driven c++ program to create a MEMBER FUNCTION template to add two numbers*/

#include<iostream>
using namespace std;
template<class sp>
class Template
{
	sp num1;
	sp num2;
	sp ans;
	public:
		Template(sp x,sp y)
		{
			num1=x;
			num2=y;
		}
		void Add()
		{
			ans=num1+num2;

			cout<<"Addition : "<<ans<<endl;
		}
		~Template()
		{
			cout<<"Destroyed object memory !!"<<endl;
		}
};
int main()
{
	int choice;
	
	do
	{
	
	cout<<"----------option----------"<<endl;
	cout<<"1. Addition of two number int "<<endl;
	cout<<"2. Addition of two number float "<<endl;
	cout<<"3. Eixt "<<endl;

	cout<<"Enter the choice : ";
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
			  	ob.Add();
			  	break;
			  }

		case 2:
			  {
			  	float a,b;
			  	
			  	cout<<"Enter the first number : ";
			  	cin>>a;

			  	cout<<"Enter the second number : ";
			  	cin>>b;

			  	Template <float>ob(a,b);
			  	ob.Add();
			  	break;
			  }

		default:
				cout<<"Invalid option !!"<<endl;
	}

	}while(3!=choice);

	return 0;
}