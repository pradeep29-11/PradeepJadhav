#include<iostream>
using namespace std;
class PrintData
{
	int x,a,b;
	public:
		void print(int x)
		{
			cout<<"x : "<<x<<endl;
		}
		void print(int a,int b)
		{
			cout<<"a : "<<a<<endl;
			cout<<"b : "<<b<<endl;
		}
		void print(string name)
		{
			cout<<"name : "<<name<<endl;
		}
};
int main()
{
	PrintData s1;
	s1.print(11);
	s1.print(11,22);
	s1.print("\"TCA\"");

	return 0;
}