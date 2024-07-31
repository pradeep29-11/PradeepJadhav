#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream fine;

	char fname[100];

	cout<<"Enter the file name : ";
	cin>>fname;

	fine.open(fname,ios::in);

	if(!fine.is_open())
	{
		cout<<"Unable to open file : ";
		exit(0);
	}

	while(1)
	{
		char ch;
		ch=fine.get();
		
		if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
		{
			cout<<ch;
		}
		if(ch==EOF)
		{
			break;
		}
	}

	fine.close();
	return 0;
}