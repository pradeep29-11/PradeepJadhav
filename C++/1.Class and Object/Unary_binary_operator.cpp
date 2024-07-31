/*Write a menu driven c++ program which overload 
Unary operator ++( increment)
Binary operator + (plus)
*/

#include<iostream>
using namespace std;

class ABC
{
	int i;
	int j;
	public:
		ABC(int x=0,int y=0)
		{
			i=x;
			j=y;
		}
		void display()
		{
			cout<<"Value of i : "<<i<<endl;
			cout<<"Value of j : "<<j<<endl;
		}
		ABC operator +(ABC &ob)
		{
			ABC tob;

			tob.i=i+ob.i;
			tob.j=j+ob.j;

			return tob;
		}
		ABC operator ++(int)
		{
			ABC tob;
			tob.i=i;
			tob.j=j;
			i++;
			j++;

			return tob;
		}
		ABC operator ++()
		{
			ABC tob;
			i++;
			j++;
			tob.i=i;
			tob.j=j;
			
			return tob;
		}
};
int main()
{
	ABC ob1(15,5);
	ABC ob2(10,50);
	ABC ob3;
	ABC ob4(2,4);
	ABC ob5;

	ABC ob6(8,9);
	ABC ob7;

	ob3=ob1+ob2;

	cout<<"Addition : "<<endl;
	ob3.display();

	
	cout<<"ob5 Posticrement : "<<endl;
	ob5=ob4++;

	ob5.display();

	cout<<"ob4 object : "<<endl;

	ob4.display();

	cout<<"ob7 Preicrement : "<<endl;
	ob7=++ob6;

	ob7.display();

	cout<<"ob6 object : "<<endl;

	ob6.display();


	return 0;
}