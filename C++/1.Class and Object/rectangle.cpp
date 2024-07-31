#include<iostream>
using namespace std;
class rectangle
{
	private :
	float lenght,breadth,area;

	public :

	void accept()
	{
			cout<<"enter the length of the rectangle : ";
			cin>>lenght;

			cout<<"enter the breadth of the rectangle : ";
			cin>>breadth;
	}
	void calculate()
	{
		area=lenght*breadth;
	}
	void display()
	{
		cout<<"length of the rectangle is "<<lenght<<endl;
		cout<<"breadth of the rectangle is "<<breadth<<endl;
		cout<<"area of the rectangle is "<<area<<endl<<endl;
	}
};
int main()
{
	rectangle ob1;

	   ob1.accept();
	   ob1.calculate();
	   ob1.display();

	   rectangle ob2;

	   ob2.accept();
	   ob2.calculate();
	   ob2.display();

	return 0;
}