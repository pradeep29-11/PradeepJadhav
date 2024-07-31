#include<iostream>
using namespace std;
class Shape
{
	public:
	virtual void calculatearea()=0;
};
class Rectangle:public Shape
{
		protected:
			int length;
			int breadth;
		public:
			Rectangle(int x=0,int y=0):length(x),breadth(y)
			{

			}
			void calculatearea()
			{
				int ans;
				ans =length*breadth;

				cout<<"Area of rectangle is : "<<ans<<endl;
			}

};
int main()
{
	Shape *p=new Rectangle(12,5);

	p->calculatearea();
	return 0;
}