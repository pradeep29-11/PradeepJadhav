#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual void calculatearea()=0;

};
class Rectangle:public Shape
{
	protected:
	int length;
	int breadth;
	int area;
	public:
		void accept()
		{
			cout<<"Enter the length of the Rectangle : ";
			cin>>length;

			cout<<"Enter the breadth of the Rectangle :";
			cin>>breadth;

		}
		void calculatearea()
		{
			area=length*breadth;
		}
		void display()
		{
			cout<<"Area of the REctangle : "<<area<<endl;
		}
};
class Circle:public Shape
{
	protected:
	float area1;
	int radius;
	public:
		void accept()
		{
			cout<<"Enter the radius circle : ";
			cin>>radius;
		}
		void calculatearea()
		{
			area1=3.14*radius*radius;
		}
		void display()
		{
			cout<<"Area of the circle : "<<area1<<endl;
		}
};
int main()
{
	Rectangle ob;
	ob.accept();
	ob.calculatearea();
	ob.display();

	Circle ob1;
	ob1.accept();
	ob1.calculatearea();
	ob1.display();

	return 0;
}