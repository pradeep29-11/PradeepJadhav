/*Create a program that reads student information (roll number, name, and marks) from a file and 
stores it in a structure. Display the student data sorted by roll numbe*/

#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
struct student
{
	int rno;
	string name;
	float marks;
};
int main()
{
	ofstream *fp;

	fp.open("a.txt","ios::out");

	if(!fp.is_open())
	{
		cout<<"Uable to open the file "<<endl;
		exit(0);
	}
	struct student s;
	int n;

	cout<<"How many stduent : ";
	cin>>n;

	for(int i=0;i<n;i++)
	{

		cout<<"Enter the roll no : ";
		cin>>s.rno;

		cin.getchar();
		cout<<"Enter the name : ";
		//cin>>s.name;
		getline(s.name);

		cout<<"Enter the marks : ";
		cin>>s.marks;

		fprintf("%d %s %d",s.rno,s.name,s.marks);
	}
	cout<<"Susesfully : "<<endl;

	fp.close();

	return 0;
}