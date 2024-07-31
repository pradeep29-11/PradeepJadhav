#include<iostream>
using namespace std;
int i=20;
class A
{
	private:
		int i;
	public:
		A()
		{
			i=1;
		}
		void display()
		{
			int i=30;
			cout<<"MAIN : "<<i<<endl;
			cout<<"Global : "<<::i<<endl;
			cout<<" P : "<<this->i <<endl;
		}
};

int main()
{
	A s1;

	s1.display();
	return 0;
}