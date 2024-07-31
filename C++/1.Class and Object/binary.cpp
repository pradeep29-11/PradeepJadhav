#include<iostream>
using namespace std;
class ABC
{
	int i;
	float f;
	public:
	ABC(int x=0,float y=0)
	{
		i=x;
		f=y;
	}
	void display()
	{
	   cout<<"Value of i : "<<i<<endl;
	   cout<<"Value of f : "<<f<<endl;
	}
	ABC operator +(ABC &ob)
	{
		ABC tob;
		tob.i=i+ob.i;
		tob.f=f+ob.f;

		return tob;
	}
};
int main()
{
	ABC ob1(12,12.5);
	ABC ob2(3,2.5);
	ABC ob3;

	ob3=ob1+ob2;

	ob3.display();
	return 0;
}