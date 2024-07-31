#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream fr;
	ofstream fw;

	string name,line,fwname;

	cout<<"Enter the File name to write : ";
	cin>>name;

	fr.open(name,ios::in);

	if(!fr.is_open())
	{
		cout<<"Invalid File open !";
		exit(0);
	}
	cout<<"Enter the File name to copy cantain : ";
	cin>>fwname;

	fw.open(fwname,ios::out);

	if(!fw.is_open())
	{
		cout<<"Invalid File open !";
		exit(0);
	}

	while(!fr.eof())
	{
		getline(fr,line);
		fw<<line<<endl;
	}
	fr.close();
	fw.close();
	return 0;
}