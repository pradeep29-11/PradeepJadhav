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
		ABC operator ++(int)
		{
			ABC temp;

			temp.i=i;
			temp.f=f;

			i++;
			f++;

			return temp;
		}

		ABC operator ++()
		{
			ABC temp;

			++i;
			++f;

			temp.i=i;
			temp.f=f;

			return temp;
		}
};
int main()
{
	ABC ob1(5,6.5);
	ABC ob2;

	ob2=ob1++;

	cout<<"ob1 : "<<endl;
	ob1.display();

	cout<<"Post increment ob2 : "<<endl;
	ob2.display();

	ABC ob3(3,4.5);
	ABC ob4;

	ob4=++ob3;

	cout<<"ob3 : "<<endl;
	ob3.display();

	cout<<"Pre increment ob4 : "<<endl;
	ob4.display();

	return 0;
}