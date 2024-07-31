#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	ifstream fin;

	char fname[10];

	cout<<"enter the file name to read : ";
	cin>>fname;

	fin.open(fname,ios::in);

	if(!fin.is_open())
	{
		cout<<"Enable to file open : "<<endl;
		exit(0);
	}
	while(1)
	{
		char ch;
		ch=fin.get();

		if(ch==EOF)
		{
			break;
		}
		cout<<ch;
	}

	

	fin.close();
	
	return 0;
}