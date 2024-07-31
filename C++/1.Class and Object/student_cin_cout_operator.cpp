#include<iostream>
using namespace std;
class student
{
	int rno;
	string name;
	int marks;
	public:
		/*student(int x,string y,int z)
		{
			rno=x;
			name=y;
			marks=z;
		}*/
		friend istream& operator >>(istream &in,student &tob);
		friend ostream& operator<<(ostream &out,student tob);
};
istream& operator >>(istream &in,student &tob)
{
	cout<<"Enter the roll no : ";
	in>>tob.rno;

	cout<<"Enter the name : ";
	in>>tob.name;

	cout<<"Enter the marks : ";
	in>>tob.marks;

	return in;
}
ostream& operator<<(ostream &out,student tob)
{
	cout<<"roll no : "<<tob.rno  <<endl;
	cout<<"name    : "<<tob.name <<endl;
	cout<<"marks   : "<<tob.marks<<endl;

	return out;
}
int main()
{
	student ob1,ob2;

	cin>>ob1>>ob2;
	cout<<ob1<<ob2;

	return 0;
}