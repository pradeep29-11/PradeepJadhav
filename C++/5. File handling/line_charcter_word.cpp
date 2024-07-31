#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream f;
	int line,chracter,word;

	char fname[10],ch;

	cout<<"Enter the File name : ";
	cin>>fname;

	f.open(fname,ios::in);

	if(!f.is_open())
	{
		cout<<"Invalid input !";
		exit(0);
	}
	line=0;
	chracter=0;
	word=0;

	while(1)
	{
		ch=f.get();
		if(ch==EOF)
		{
			break;
		}
		chracter++;
		if(ch==' ' || ch=='\t')
		{
			word++;
		}
		if(ch=='\n')
		{
			word++;
			line++;
		}
	}
	cout<<"No of Line     : "<<line    <<endl;
	cout<<"No of chracter : "<<chracter<<endl;
	cout<<"No of Word     : "<<word    <<endl;

	f.close();
	return 0;
}