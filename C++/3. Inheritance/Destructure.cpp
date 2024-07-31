#include<iostream>
using namespace std;
class A
{
	protected:
		int i;

	public:
		virtual void display()=0;

};
class B:public A
{
	public:
		void display()
		{
			cout<<"Defenation of A display : "<<endl;
		}
};
int main()
{
	A *p=new B;

	p->display();
	return 0;
}