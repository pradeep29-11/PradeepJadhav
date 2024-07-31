#include <iostream>
using namespace std;

class pradeep
{  
	int a,b;
public:
	pradeep(int x,int y)
	{
		a=x;
		b=y;

	}
	pradeep(int x,int y,int z=0)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"The value of a and b:"<<a<<b<<endl;
	}
	void play()
	{
		cout<<"the value of a,b and z"<<a<<b<<z<<endl;

	}

};

int main()
{
 pradeep o(4,5,4);
 o.display();
 o.play();
 return 0;
}
