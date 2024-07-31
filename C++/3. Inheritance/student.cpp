#include<iostream>
using namespace std;
class Date
{
	int date;
	int month;
	int year;
	public:
		Date(int d=1,int m=1,int y=1900):date(d),month(m),year(y)
		{

		}
		void show()
		{
			cout<<"date       : "<<date<<"/"<<month<<"/"<<year<<endl;
		}
};
class Student
{
	int rno;
	string name;
	double per;
	
	public:
		Student(int r=1,string n="A",double p=1)
		{
			rno=r;
			name=n;
			per=p;
		}
		void display()
		{
			
			cout<<"roll no    : "<<rno<<endl;
			cout<<"name       : "<<name<<endl;
			cout<<"percentage : "<<per<<"%"<<endl;
			
		}
};
int main()
{
	Date dob(29,11,2004);

	Student ob(15,"pradeep",99);

	ob.display();
	dob.show();
	return 0;
}