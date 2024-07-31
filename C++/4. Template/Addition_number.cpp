#include<iostream>
using namespace std;
template<class tp>

class Addition
{
	tp i,j,ans;
	public:
		void accept()
		{
			cout<<"Enter the First number : ";
			cin>>i;

			cout<<"Enter the second number : ";
			cin>>j;
		}
		void calculate()
		{
			ans=j+j;
		}
		void display()
		{
			cout<<"Addition of two number : "<<ans<<endl;
		}

};
int main()
{
	Addition<int> ob;
	ob.accept();
	ob.calculate();
	ob.display();

	Addition<float> ob2;
	ob2.accept();
	ob2.calculate();
	ob2.display();


	return 0;

}
