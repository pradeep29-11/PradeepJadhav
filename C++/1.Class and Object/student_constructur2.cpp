#include<iostream>
using namespace std;
class student
{
	private :
	int roll_no;
	string name ;
	float perc;

	public :

	student():roll_no(15),name("pradeep"),perc(23.4)
	{
		cout<<"I am empty parameter constructur : "<<endl;
	}
	student(int roll_no,string name,float perc):roll_no(roll_no),name(name),perc(perc)
	{
		cout<<"I am parametrized constructur :"<<endl;
	}
	student(student &tob):roll_no(tob.roll_no),name(tob.name),perc(tob.perc)
	{
		cout<<"I am copy constructur : "<<endl;
	}
	void display()
	{
		cout<<"roll no : "<<roll_no<<endl;
		cout<<"name : "<<name<<endl;
		cout<<"percentage : "<<perc<<endl;
		cout<<"-------------------------------- : "<<endl;
	}
	~student()
	{
		cout<<"  "<<name<<endl;
	}
};
int main()
{
	student s1;
	s1.display();

	student s2(16,"kartik",3.2);
	s2.display();

	student s3(s2);
	s3.display();

	return 0;
}