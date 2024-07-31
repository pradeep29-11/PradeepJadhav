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
		ABC operator -()
		{
			ABC temp;

			temp.i=-i;
			temp.f=-f;

			return temp;
		}
};
int main()
{
	ABC ob1(-3,-6.5),ob2;

	ob2=-ob1;

	cout<<"ob1 : "<<endl;
	ob1.display();

	cout<<"ob2 : "<<endl;
	ob2.display();
	
}