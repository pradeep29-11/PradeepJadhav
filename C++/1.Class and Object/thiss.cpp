#include<iostream>
using namespace std;

class A
{
	int x,y;

public:
	void show(int x,int y)
	{
		//this->x=x;
		//this->y=y;
			x=x;
			y=y;
	}




	void display()
	{
		cout<<"1st"<<x<<endl;
		cout<<"2nd"<<y<<endl;

	}
};
int main()

{
	A a;
	int p,q;
	p=10;
	q=20;

	a.show(p,q);
	a.display();
	return 0;
}











