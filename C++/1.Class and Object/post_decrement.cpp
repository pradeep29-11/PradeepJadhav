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
			cout<<"Value of i : "<<i<<endl;
			cout<<"Value of f : "<<f<<endl;
		}
		ABC operator--(int)
		{
			ABC tob;

			tob.i=i;
			tob.f=f;

			i=i-1;
			f=f-1;
			

			return tob;
		}
};
int main()
{
	ABC ob1(5,5.5);
	//ABC ob2(5,4.5);
	ABC ob3;

	ob3=ob1--;
	
	cout<<"ob3 : ";
	ob3.display();

	cout<<"ob1 : ";
	ob1.display();
	return 0;
}