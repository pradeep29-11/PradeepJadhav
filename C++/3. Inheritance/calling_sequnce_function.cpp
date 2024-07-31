#include<iostream>
using namespace std;
class Base
{
	int i;
	public:
		Base(int x)
		{
			i=x;
		}
		void virtual display()
		{
			cout<<"Value of i : "<<i<<endl;
		}
		virtual ~Base()
		{
			cout<<"Base class : "<<endl;
		}
};
class kartik:public Base
{
	int j;
	public:
		kartik(int y=0,int z=0):Base(y)
		{
			j=z;
		}
		void display()
		{
			Base::display();
			cout<<"Value of j : "<<j<<endl;
		}
		~kartik()
		{
			cout<<"I am in kartik : "<<endl;
		}
};
int main()
{
	Base *ob=new kartik(2,3);
	ob->display();

	delete ob;
	return 0;
}