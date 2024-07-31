#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream fr;
	string name,line;

	cout<<"Enter the File name : ";
	cin>>name;

	fr.open(name,ios::in);

	if(!fr.is_open())
	{
		cout<<"Invalid file name !";
		exit(0);
	}

	while(!fr.eof())
	{
		getline(fr,line);
		cout<<line<<endl;
	}
	fr.close();
	return 0;
}