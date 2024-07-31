#include<iostream>
using namespace std;
class A
{
	protected:
		int i;

	public:
		A(int k=0):i(k)
		{
			cout<<"I am A constructor : "<<endl;
		}
		void display()
		{
			cout<<"A display : "<<i<<endl;
		}
};
class B
{
	int j;
	public:
		B(int y=0):j(y)
		{
			cout<<"I am B constructor : "<<endl;

		}
		void display()
		{
			cout<<"B display : "<<j<<endl;
		}
};
class C:public A,public B
{
	public:
		C():B(3),A(6)
		{
			
			cout<<"I am C constructor : "<<endl;
		}
		void display()
		{
			A::display();
			B::display();
			cout<<"C display : "<<endl;
		}
};
int main()
{
	C ob;
	ob.display();
	return 0;
}

