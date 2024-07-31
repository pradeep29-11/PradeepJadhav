#include<iostream>
using namespace std;
class abc
{
		private :
		int i;
		float f;

		public :
		abc()										// Default parameter or empty parameter
		{
			i=10;
			f=14.3;
		}
		abc(int x,float y)							// Parametrized constructur
		{
			
			i=x;
			f=y;
		}
		abc(abc&tob)								// copys constructur
		{
			i=tob.i;
			f=tob.f;

		}
		void display()
		{
			cout<<"i : "<<i<<endl;
			cout<<"f : "<<f<<endl;
		}
};
int main()
{
	abc ob1;
	ob1.display();

	abc ob2(11,12.9);
	ob2.display();

	abc ob3(ob2);
	ob3.display();
	return 0;
}
