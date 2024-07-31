#include<iostream>
using namespace std;

class student 
{
		private:
			int roll_no;
			string name;
			float perc;

		public :

		    void accept()
		    {
		    	cout<<"Enter the roll no  : ";
		    	cin>>roll_no;

		    	cin.get();

		    	cout<<"Enter the name : ";
		    	getline(cin,name);

		    	cout<<"Enter the percentage : ";
		    	cin>>perc;
		    }
		    void display()
		    {
		    	cout<<"name : "<<name<<endl;
		    	cout<<"roll no : "<<roll_no<<endl;
		    	cout<<"percentage : "<<perc<<endl;
		    }
};
int main()
{
	int n;

		cout<<"Enter the number of student : ";
		cin>>n;

		student ob[n];

		for(int i=0;i<n;i++)
		{
			ob[i].accept();
		}
		cout<<"student information : "<<endl;
		for(int i=0;i<n;i++)
		{
			ob[i].display();
		}


	return 0;
}           