#include<iostream>
using namespace std;
class Person
{
	protected:
		int id;
		string name;
		static int cnt;
	public:
		void accept()
		{
			id=cnt;
			cnt++;
			cout<<"Enter the name : ";
			cin>>name;
		}
		void display()
		{
			cout<<id<<"	"<<name<<"	";
		}
};
int Person::cnt=1001;
class Hourly:public Person
{
	protected:
		float rate;
		int hours;
	public:
		void accept()
		{
			Person::accept();
			cout<<"Enter the rate : ";
			cin>>rate;

			cout<<"Enter the hours : ";
			cin>>hours;
		}
		void display()
		{
			Person::display();
			cout<<rate<<"	"<<hours<<"		"<<rate*hours<<" 	";	
		}
};
class Salary:public Person
{
	protected:
		float salary;
	public:

		void accept()
		{
			Person::accept();
			cout<<"Enter the salary : ";
			cin>>salary;
		}
		void display()
		{
			Person::display();
			cout<<"		"<<salary<<endl;
		}
};
int main()
{
	Salary ob1,ob2;
	

	ob1.accept();
	ob2.accept();

	
	ob1.display();
	ob2.display();

	
	return 0;
}