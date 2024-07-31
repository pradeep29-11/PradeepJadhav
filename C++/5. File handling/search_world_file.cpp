/*Implement a program to search for a specific word in a text file. Display the line numbers where the 
word occurs along with the count of occurrences*/

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream fp;
	char name[50],search;
	int line;

	cout<<"Enter the file name : ";
	cin>>name;

	fp.open(name,ios::in);

	if(!fp.is_open())
	{
		cout<<"Unable to open the file !!"<<endl;
		exit(0);
	}
	line=1;

	cout<<"Which word you want to search : ";
	cin>>search;

	while(1)
	{
		//cout<<"Heloo";
		char ch=fp.get();

		if(ch==EOF)
		{
			break;
		}
		if(ch=='\n')
		{
			
			line++;
		}
		if(ch==search)
		{
			break;
		}


	}
	cout<<search<<" word occurs in "<<line<<" line number"<<endl;
	
	fp.close();

}