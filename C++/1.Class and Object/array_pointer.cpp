#include<iostream>
using namespace std;
class employed
{
	private :
	string name;
	string place;
	float salary;

	public :
	employed(string x,string y,float z)
	{
		name=x;
		place=y;
		salary=z;
	}
	employed(employed &pradeep)
	{
		name=pradeep.name;
		place=pradeep.place;
		salary=pradeep.salary;
	}
	void display()
	{
		cout<<"name : "<<name<<endl;
		cout<<"place : "<<place<<endl;
		cout<<"salary : "<<salary<<endl;
		cout<<"------------------"<<endl;
	}
	~employed()
	{
		cout<<"Destroyed"<<name<<endl;
	}

};
int main()
{
	employed s1("pradeep jadhav ","pune",12333);
	s1.display();

	employed *p=&s1;

	(*p).display();
	return 0;
}