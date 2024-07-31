#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual void area()=0;

		virtual void perimeter()=0;
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
		void area()
		{
			int ans;
			ans=length*breadth;

			cout<<"Area of Rectangle : "<<ans<<endl;
		}
		void perimeter()
		{
			int p;

			p=2*(length+breadth);

			cout<<"perimeter of Rectangle : "<<p<<endl;
		}
};
class Circle:public Shape
{
	int radius;
	public:
		Circle(int z)
		{
			radius=z;
		}
		void area()
		{
			float ans;

			ans=3.14*radius*radius;

			cout<<"Area of Circle : "<<ans<<endl;
		}
		void perimeter()
		{
			float p;

			p=2*3.14*radius;

			cout<<"perimeter of Circle : "<<p<<endl;
		}

};
class Triangle: public Shape
{
	int base;
	float height;
	public:
		Triangle(int a,int b)
		{
			base=a;
			height=b;
		}
		void area()
		{
			float ans;

			ans=(base*height)/2;

			cout<<"Area of Triangle : "<<ans<<endl;
		}
		void perimeter()
		{
			int p;

			p=base+height+height;

			cout<<"perimeter of Triangle : "<<p<<endl;
		}
};
int main()
{
	int l,b,r,ba;
	float h;
	char ch;

	Shape *ob=NULL;

	cout<<"Which Area you want : ";
	cin>>ch;

	switch(ch)
	{
	case 'R':
	case 'r':
				cout<<"Enter the length of rectangle : ";
				cin>>l;

				cout<<"Enter the breadth of rectangle : ";
				cin>>b;

				ob=new Rectangle(l,b);
				ob->area();
				ob->perimeter();
				break;
	case 'C':
	case 'c':
				cout<<"Enter the radius of Circle : ";
				cin>>r;

				ob=new Circle(r);
				ob->area();
				ob->perimeter();
				break;
	case 'T':
	case 't':
				cout<<"Enter the base of the Traingle : ";
				cin>>ba;

				cout<<"Enter the height of Triangle : ";
				cin>>h;

				ob=new Triangle(ba,h);
				ob->area();
				ob->perimeter();
				break;
	default:
				cout<<"In valid input : ";
	}
	return 0;
}
