#include<iostream>
using namespace std;
class A
{
		protected:
			int i;
		public:
			A(int x=0):i(x)
			{
				cout<<"I am in A class i : "<<i<<endl;
			}
};
class B
{
		protected:
			int j;
		public:
			B(int y=0):j(y)
			{
				cout<<"I am in B class j :  "<<j<<endl;
			}
};
			
class C :public A,public B 
{
		int k;
		public:
			C(int g=0,int h=0,int j=0):B(h),A(g),k(j)
			{
				cout<<"I am in C class K : "<<k<<endl;
			}
};
int main()
{
	C ob(12,13,14);

	return 0;
}