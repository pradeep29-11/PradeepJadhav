/*Write a C++ program to create a new text file and write some text into i*/

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ofstream fp;
	char name[50];

	cout<<"Enter the file name : ";
	cin>>name;

	fp.open(name,ios::out);

	if(!fp.is_open())
	{
		cout<<"Unable to open the file !!"<<endl;
		exit(0);
	}

	fp<<"Hello"<<endl;
	fp<<"my name is prdeep jadhav"<<endl;
	fp<<"Byee!!"<<endl;

	cout<<"Writen succefully"<<endl;

	fp.close();
}