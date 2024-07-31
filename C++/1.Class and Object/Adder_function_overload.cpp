/*Write a menu driven c++ program to overload a function Adder( ) which calculate
Addition of three integer no
Addition of two float numbers*/

#include<iostream>
#include<cstdlib>
using namespace std;

void Adder(float a=0,float b=0)
{
	float sum;
	sum=a+b;

	cout<<"Addition of two number : "<<sum<<endl;
}
void Adder(int a,int b,int c)
{
	int sum;

	sum=a+b+c;
	cout<<"Addition of three number : "<<sum<<endl;
}
int main()
{
	while(1)
	{
		int choice;

		cout<<"=======Option======="<<endl;
		cout<<"1. Addition of three integer number "<<endl;
		cout<<"2. Addition of two float number "<<endl;
		cout<<"0. exit "<<endl;

		cout<<"Enter the choice : ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				{
					int a,b,c;

					cout<<"Enter the first number : ";
					cin>>a;

					cout<<"Enter the second number : ";
					cin>>b;

					cout<<"Enter the third number : ";
					cin>>c;

					Adder(a,b,c);
					break;
				}

			case 2:
				{
					float a,b;
					cout<<"Enter the first number : ";
					cin>>a;

					cout<<"Enter the second number : ";
					cin>>b;

					Adder(a,b);
					break;
				}
			case 0:
				{
					exit(0);
					break;
				}
			default:
					cout<<"Invalid option !!"<<endl;
		}
	}
	return 0;
}