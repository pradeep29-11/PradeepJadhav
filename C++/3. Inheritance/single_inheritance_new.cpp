#include<iostream>
using namespace std;
class Base
{
	protected:

		public:
		virtual void display()
		{
			cout<<"I am in Base display : "<<endl;
		}


	
};
class Derived:public Base
{
	public:
		void display()
		{
			Base::display();
			cout<<"I am in Derived display "<<endl;

		}
};
int main()
{
	Base *p=new Derived;
	p->display();

	return 0;
}