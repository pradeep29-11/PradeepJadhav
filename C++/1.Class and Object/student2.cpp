#include<iostream>
using namespace std;
class student
{
	private :
	int roll_no;
	string name;
	float perc;

	public :

	void accept()
	{
		cout<<"Enter the roll no : ";
		cin>>roll_no;

		cin.get();

		cout<<"Enter the name : ";
		getline(cin,name);

		cout<<"Enter the percentage : ";
		cin>>perc;
	}
	void display()
	{
		cout<<"roll no : "<<roll_no<<endl;
		cout<<"name : "<<name<<endl;
		cout<<"percantage : "<<perc<<endl;
	}
};
int main()
{
	student ob1;

	ob1.accept();
	ob1.display();

	return 0;
}