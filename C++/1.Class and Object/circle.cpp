#include<iostream>
using namespace std;
class circle
{
	private :
	float radius,area;

   public :
void accept()
{
	cout<<"enter the radius of circle : ";
	cin>>radius;
}
void calculate()
{
	area=3.14*radius*radius;
}
void display()
{
	cout<<"radius of circle "<<radius<<endl;
	cout<<"area of circle is "<<area<<endl;
}
};

int main()
{
	circle ob1;

	ob1.accept();
	ob1.calculate();
	ob1.display();

	circle ob2;

	ob2.accept();
	ob2.calculate();
	ob2.display();
	
	return 0;
}