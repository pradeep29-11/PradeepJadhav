/*Write a menu driven c++ program which overload 
Unary operator - - (decrement)
Binary operator – (minus)*/

#include<iostream>
#include<cstdlib>
using namespace std;
class ABC
{
	int i;
	int j;
	public:
		ABC(int x=0,int y=0)
		{
			i=x;
			j=y;
		}
		void display()
		{
			cout<<"Value of i : "<<i<<endl;
			cout<<"Value of j : "<<j<<endl;
		}
		ABC operator --(int)
		{
			ABC temp;

			temp.i=i;
			temp.j=j;
			i--;
			j--;

			return temp;
		}
		ABC operator--()
		{
			ABC temp;

			i--;
			j--;
			temp.i=i;
			temp.j=j;
			return temp;
		}
		ABC operator -()
		{
			ABC temp;

			temp.i=-i;
			temp.j=-j;

			return temp;
		}

};
int main()
{

	int m,n,choice;

	while(1)
	{

	cout<<"=======option======="<<endl;
	cout<<"1 pre  decrement subtraction"<<endl;
	cout<<"2 post decrement subtraction"<<endl;
	cout<<"3 minus of the object "<<endl;
	cout<<"0 Exit "<<endl;

	
	cout<<"Enter the choice : ";
	cin>>choice;

	cout<<"Enter the first number : ";
	cin>>m;

	cout<<"Enter the second number : ";
	cin>>n;

	ABC ob1(m,n);
	ABC ob2;

	switch(choice)
	{
		case 1:
			{
				ob2=--ob1;
				cout<<"Pre decrement ob1 : "<<endl;
				ob1.display();

				cout<<"ob2 : "<<endl;
				ob2.display();
				break;
			}
		case 2:
			{
				ob2=ob1--;
				cout<<"post decrement ob1 : "<<endl;
				ob1.display();

				cout<<"ob2 : "<<endl;
				ob2.display();
				break;
			}
		case 3:
			{
				-ob1;
				cout<<"Minus : "<<endl;
				ob1.display();
				break;
			}
		case 0:
				exit(0);
				//break;

		default:
				cout<<"Invalid option !!"<<endl;
				
	}
	}
	
	return 0;
}