#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outf("text.txt");
	cout<<"enter name";
	string name;
	cin>>name;

	cout<<"enter roll";
	int roll;
	cin>>roll;

	outf<<name;
	outf<<roll;

	ifstream out("text.txt");
	out>>name;
	out>>roll;
	cout<<"name:"<<name<<endl;
	out.close();



	return 0;
} 