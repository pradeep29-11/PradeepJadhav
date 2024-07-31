#include<iostream>
using namespace std;
class ABC 
{
	int i;
	float f;

	public:
		ABC(int i=0,float f=0.0)
		{
			this->i=i;
			this->f=f;
		}
		void display()
		{
			cout<<"value of i : "<<i<<endl;
			cout<<"value of f : "<<f<<endl;
		}
		friend ABC operator-(ABC &sob,ABC &dob);
};
ABC operator-(ABC &sob, ABC &dob)
{
	ABC tob;

	tob.i=sob.i-dob.f;
	tob.f=sob.f-dob.f;

	return tob;
}
int main()
{
	ABC ob1(6,5.5);
	ABC ob2(5,4.5);
	ABC ob3;

	ob3=ob1-ob2;

	ob3.display();
	return 0;
}