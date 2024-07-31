#include<iostream>
using namespace std;
class Complex
{
	int imag;
	int real;
	public:
		Complex(int x=0,int y=0)
		{
			imag=x;
			real=y;
		}
		void display()
		{
			cout<<real<<" +i "<<imag;
		}
		Complex operator+(Complex &tob)
		{
			Complex sob;

			sob.real=(real*tob.real)-(imag*tob.imag);
			sob.imag=(imag*tob.real)+(real*tob.imag);

				return sob;
		}
};
int main()
{
	Complex ob1(5,6);
	Complex ob2(3,4);
	Complex ob3;

	ob3=ob1+ob2;

	cout<<"Multiplication of Complex number : "<<endl;
	ob3.display();
	return 0;
}