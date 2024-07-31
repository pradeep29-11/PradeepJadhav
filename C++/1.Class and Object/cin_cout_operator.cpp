#include<iostream>
using namespace std;
class base
{
	int i;
	float f;
	public:
		base(int x=0,float y=0.0)
		{
			i=x;
			f=y;
		}
		friend istream& operator >>(istream &in,base &tob);
		friend ostream& operator <<(ostream &out,base tob);
};
istream& operator >>(istream &in,base &tob)
{
	cout<<"Enter the value of i : ";
	in>>tob.i;

	cout<<"Enter the value of f : ";
	in>>tob.f;

	return in;
}
ostream& operator <<(ostream &out,base tob)
{
	cout<<"Value of i : "<<tob.i<<endl;
	cout<<"Value of f : "<<tob.f<<endl;
}
int main()
{
	base ob;
	cin>>ob;
	cout<<ob;
	return 0;
}