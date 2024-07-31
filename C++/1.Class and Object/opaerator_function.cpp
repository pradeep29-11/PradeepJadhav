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

		ABC operator +(int x)
		{
			ABC tob;

			tob.i=i+x;
			tob.f=f+x;

			return tob;
		}
		friend ABC operator +(ABC &tob,ABC &sob);
		friend ABC operator -(ABC &tob,ABC &sob);
		friend ABC operator *(ABC &tob,ABC &sob);
		friend ABC operator /(ABC &tob,ABC &sob);
		friend ABC operator +(int x,ABC &tob);


};
ABC operator +(ABC &tob,ABC &sob)
{
	ABC temp;

	temp.i=tob.i+sob.i;
	temp.f=tob.f+sob.f;

	return temp;

}
ABC operator -(ABC &tob,ABC &sob)
{
	ABC temp;

	temp.i=tob.i-sob.i;
	temp.f=tob.f-sob.f;

	return temp;
}
ABC operator *(ABC &tob,ABC &sob)
{
	ABC temp;

	temp.i=tob.i*sob.i;
	temp.f=tob.f*sob.f;

	return temp;

}
ABC operator /(ABC &tob,ABC &sob)
{
	ABC temp;

	temp.i=tob.i/sob.i;
	temp.f=tob.f/sob.f;

	return temp;

}
ABC operator +(int x,ABC &tob)
{
	ABC temp;

	temp.i=x+tob.i;
	temp.f=x+tob.f;

	return temp;
}
int main()
{
	ABC ob1(3,4.5);
	ABC ob2(4,5.6);
	ABC ob3;

	ob3=ob1+ob2;

	cout<<"Addition of object : "<<endl;
	ob3.display();

	ob3=ob1-ob2;

	cout<<"Subtraction of object : "<<endl;
	ob3.display();

	ob3=ob1*ob2;

	cout<<"Multiplication of object : "<<endl;
	ob3.display();

	ob3=ob1/ob2;

	cout<<"Dividing of object : "<<endl;
	ob3.display();

	ob3=10+ob1;

	cout<<"Additing integer and object : "<<endl;
	ob3.display();

	ob3=ob1+10;

	cout<<"Additing object and integer: "<<endl;
	ob3.display();
	return 0;
}