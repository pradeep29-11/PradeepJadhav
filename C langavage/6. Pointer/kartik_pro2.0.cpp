#include<iostream>
using namespace std;

class Base
{

public:
	int from;
	char to,TO;
    int rs;
    double usd;
	//float pkr;
	float yuan;
	float npr;
	double Euro;
	double pound;
	//float peso;
	//float taka;
	//float real,oman;

	void show()
	{	cout<<"------------------------------------------------";
		cout<<"Choose any key as per instruction";
		cout<<"RS-USD/YUAN/EURO/POUND:select R";
		cout<<"USD-RS/YUAN/EURO/POUND:select U";
		cout<<"YUAN-USD/RS/EURO/POUND:select Y";
		cout<<"EURO-USD/YUAN/RS/POUND:select E";
		cout<<"POUND-USD/YUAN/EURO/RS:select P";
		cout<<"------------------------------------------------";
	}


};

switch(to)
{	
	case 'R':

		class derived1:public Base
		{
 			cout<<"CONVERT RS INTO USD/YUAN/EURO/POUND ";
 			cout<<"SELECT 'u' TO COVERT RS INTO USD";
 			cout<<"SELECT 'y' TO CONVERT RS INTO YUAN";
 			cout<<"SELECT 'e' TO CONVERT RS INTO EURO";
 			cout<<"SELECT 'p' TO CONVERT RS INTO POUND";
 			cout<<"--------------------------------------------";
 			cout<<"enter amount in rupees :";
 			cin>>rs;
 			switch(TO)
 			{ 
 				case 'u':
 					usd=83.3*rs;
 					cout<<usd;
 					break;

 				case 'y':
 					yuan=11.51*rs;
 					cout<<yuan;
 					break;

 				case 'e':
 					euro=90.37*rs;
 					cout<<euro;
 					break;

 				case 'p':
 					pound=105.27*rs;
 					cout<<pound;
 					break;

 			}


 		};	



 	case 'U':

 		class

}


	int main()
	{
		Base b;
		b.void show();
		return 0;
	}