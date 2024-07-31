/*Write a menu driven c++ program to create a MEMBER FUNCTION template to subtract two 
numbers. */

#include<iostream>
using namespace std;

template<class sp>
class Template 
{
	sp num1;
	sp num2;
	sp ans;
    public:
    	Template(sp a,sp b)
    	{
    		num1=a;
    		num2=b;
    	}
    	void subtract()
    	{
    		ans=num1-num2;

    		cout<<"Subtraction : "<<ans<<endl;
    	}
    	~Template()
    	{
    		cout<<"Destroyed object Memory !!"<<endl;
    	}

};
int main()
{
	int choice;
	do
	{
		cout<<"----------option----------"<<endl;
		cout<<"1. Subtrcation of two number int "<<endl;
		cout<<"2. Subtrcation of two number float "<<endl;
		cout<<"3. Exit "<<endl;

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
				  	ob.subtract();
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
				  	ob.subtract();
				  	break;			  	
				  }

			default:
					cout<<"Invalid option !!"<<endl;
		}

	}while(3!=choice);

	return 0;
}