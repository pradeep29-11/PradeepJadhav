#include<iostream>
using namespace std;
class ABC
{
	public:
		static void display()
		{
			cout<<"My name is pradeep !"<<endl;
		}

};
int main()
{
	ABC::display();
	return 0;
}