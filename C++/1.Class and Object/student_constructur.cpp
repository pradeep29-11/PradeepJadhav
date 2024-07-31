#include<iostream>
using namespace std;
class student
{
	private :
	int roll_no;
	string name;
	float perc;

	public :
	student()
	{
		cout<<"I Empty in constructur : "<<endl;
		int roll_no=0;
		string name="**";
		float perc=0.0;
	}
	student(int roll_no,string name,float perc)
	{
		cout<<"I Parameterzed in constructur :"<<endl;
		this->roll_no=roll_no;
		this->name=name;
		this->perc=perc;
	}
	student(student &pra)
	{
		cout<<"I copy in constructur : "<<endl;
		roll_no=pra.roll_no;
		name=pra.name;
		perc=pra.perc;
	}
	void display()
	{
		cout<<"Roll no : "<<roll_no<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"percentage : "<<perc<<endl;
		cout<<"----------------------------------"<<endl;


	}
	~student()
	{
		cout<<"Hey god ..."<<name<<"Daying"<<endl;
	}
};
int main()
{
	student s1;

	student s2(16,"gh",3.2);

	student s3(s2);

	s1.display();
	s2.display();
	s3.display();

	return 0;
}