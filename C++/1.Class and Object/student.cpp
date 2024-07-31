/*
		Assigment : name,roll no and marks of the students
		Author    : pradeep jadhav
		Date      :26/01/24
*/

#include<iostream>
using namespace std;
class students
{
		private :
		char name[100];
		int rno;
		float marks;
		public :


		void accept()
		{
			cout<<"enter the name of the students : ";
			cin>>name;

			cout<<"enter the roll no of the students :";
			cin>>rno;

			cout<<"enter the marks of the students : ";
			cin>>marks;
		}
		void display()
		{
			cout<<"The name of the students is "<<name<<endl;
			cout<<"The roll no of the students is "<<rno<<endl;
			cout<<"The marks of the students is "<<marks<<endl<<endl;
		}
};
int main()
{

		students ob1;

		ob1.accept();
		ob1.display();

		students ob2;

		ob2.accept();
		ob2.display();
	return 0;
}