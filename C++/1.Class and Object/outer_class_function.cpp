#include<iostream>
using namespace std;
 class ABC
{
	private:
		int i;
	public:
		void display();
		void show(int);

};
void ABC::display()
{
	cout<<"My name is Pradeep : "<<endl;
}
void ABC::show(int x)
{
	cout<<"Main : "<<x<<endl;
}
int main()
{
	ABC s1;

	s1.display();
	s1.show(10);
	return 0;
}