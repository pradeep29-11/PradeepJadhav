#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
	ifstream fin;

	char fname[10];

	cout<<"Enter a file to read : ";
	cin>>fname;

	fin.open(fname, ios::in);

	if( ! fin.is_open())
	{
		cout<<"Unable to open file  : "<< fname << endl;
		exit(0);
	}

	cout<<"File Content" << endl;

	while(1)
	{
		char ch = fin.get(); //*

		if(ch==EOF)
		{
			break;
		}


		// check ch is hving vowel
		// if it is cnt++
		// else -- dont write
		cout<<ch;
	}

	
	fin.close();
	return 0;
}