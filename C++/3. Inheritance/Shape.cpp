#include<iostream>
#include<stdio.h>
using namespace std;
class Shape 
{
	public:
		void virtual Area()=0;
};
class Rectangle:public Shape
{
	int length;
	int breadth;
	public:
		Rectangle(int x,int y)
		{
			length=x;
			breadth=y;
		}
		void Area()
		{
			int ans;
			if(length>0 && breadth>0)
			{
			ans=length*breadth;

			cout<<"Area of Rectangle : "<<ans<<endl;
			}
			else
			{
				cout<<"In Valid input : "<<endl;
			}
		}

};
class Circle: public Shape
{
	int radius;
	public:
		Circle(int z)
		{
			radius=z;
		}
		void Area()
		{
			if(radius>0)
			{
				float ans;
				ans=3.14*radius*radius;

				cout<<"Area of Circle : "<<ans<<endl;
			}
			else
			{
				cout<<"In Valid input "<<endl;
			}
		}
};

int main()
{
	char ch;
	int l,b,r;

	Shape *ob=0;

	cout<<"Which Area you want : ";
	cin>>ch;

	switch(ch)
	{
		case 'R':
		case 'r':
					
					cout<<"Enter the length : ";
					cin>>l;

					cout<<"Enter the Breadth : ";
					cin>>b;

					ob=new Rectangle(l,b);
					ob->Area();
					break;
		case 'C':
		case 'c':
					
					cout<<"Enter the radius : ";
					cin>>r;

					ob=new Circle(r);
					ob->Area();
					break;
		default:
					cout<<"In valid input : ";


	}
	return 0;
}