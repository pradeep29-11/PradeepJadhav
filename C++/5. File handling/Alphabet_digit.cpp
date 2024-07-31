#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	ifstream fine;
	int a,d,A,s;

	char fnmae[10],ch;

	cout<<"Enter the File name : ";
	cin>>fnmae;

	fine.open(fnmae,ios::in);

	if(!fine.is_open())
	{
		cout<<"Invalid File name : ";
		exit(0);
	}

	a=0;
	A=0;
	s=0;
	d=0;
	while(1)
	{
		ch=fine.get();
		if(ch==EOF)
		{
			break;
		}
		if(ch>='a'&&ch<='z')
		{
			a++;
		}
		else if(ch>='A'&& ch<='Z')
		{
			A++;
		}
		else if(ch>='0' && ch<='9')
		{
			d++;
		}
		else
		{
			s++;
		}
	}

	cout<<"Capital Alphatbet Count : "<<A<<endl;
	cout<<"Small Alphatbet Count   : "<<a<<endl;
	cout<<"Digit Count             : "<<d<<endl;
	cout<<"Special character Count : "<<A<<endl;

	f.close();
	return 0;
}