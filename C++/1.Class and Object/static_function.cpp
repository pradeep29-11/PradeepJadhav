#include<iostream>
using namespace std;
class ABC
{
		private:
			int x;
			string name;
			static int y;

		public:
			ABC(int h,string j)
			{
				x=h;
				name=j;
				y++;
			}
			ABC(ABC &tob)
			{
				x=tob.x;
				name=tob.name;
				y++;
			}
			static void show()
			{
					cout<<"no of obejct : "<<y<<endl;
			}
			void display()
			{
				cout<<"no  : "<<x<<endl;
				cout<<"name : "<<name<<endl;
			}
			~ABC()
			{
				cout<<"obejct detsroyed : "<<x<<endl;
			}
};
int ABC::y=0;
int main()
{
	ABC s1(12,"pradeep");
	s1.display();
	
	ABC s2(s1);
	s2.display();

	ABC::show();
	return 0;
}