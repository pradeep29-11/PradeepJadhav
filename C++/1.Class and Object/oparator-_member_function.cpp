#include<iostream>
using namespace std;
class ABC 
{
	int i;
	float f;
	public:
		ABC(int x=0,float y=0.0)
		{
			i=x;
			f=y;
		}
		void display()
		{
			cout<<"value of i : "<<i<<endl;
			cout<<"value of f : "<<f<<endl;
		}
		ABC operator-(ABC &sob)
		{
			ABC tob;
			tob.i=i-sob.i;
			tob.f=f-sob.f;

			return tob;
		}
};
int main()
{
	ABC ob1(10,14.5);
	ABC ob2(11,15.5);
	ABC ob3;

	ob3=ob1-ob2;

	ob3.display();

	return 0;
}