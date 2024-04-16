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
		public:
			derived1()
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


 			}


 		};	

 		break;

 	case 'U':

		class derived2:public derived1
 		{ 
 		public:
 			derived2()
 			{
			cout<<"CONVERT USD INTO RS/YUAN/EURO/POUND ";
 			cout<<"SELECT 'u' TO COVERT RS INTO USD";
 			cout<<"SELECT 'y' TO CONVERT RS INTO YUAN";
 			cout<<"SELECT 'e' TO CONVERT RS INTO EURO";
 			cout<<"SELECT 'p' TO CONVERT RS INTO POUND";
 			cout<<"--------------------------------------------";
 			cout<<"enter amount in USD :";
 			cin>>usd;

 			switch(TO)
 			{ 
 				case 'r':
 					rs=0.012*usd;
 					cout<<rs;
 					break;

 				case 'y':
 					yuan=0.14*usd;
 					cout<<yuan;
 					break;

 				case 'e':
 					euro=1.09*usd;
 					cout<<euro;
 					break;

 				case 'p':
 					pound=1.27*usd;
 					cout<<pound;
 					break; 		
 			}


 			}

 		};

		break;


       case 'Y':

		class derived3:public derived2
 		{
 		public:
 			derived3()
 			{
			cout<<"CONVERT USD INTO RS/YUAN/EURO/POUND ";
 			cout<<"SELECT 'u' TO COVERT YUAN INTO USD";
 			cout<<"SELECT 'r' TO CONVERT YUAN INTO RS";
 			cout<<"SELECT 'e' TO CONVERT YUAN INTO EURO";
 			cout<<"SELECT 'p' TO CONVERT YUAN INTO POUND";
 			cout<<"--------------------------------------------";
 			cout<<"enter amount in YUAN :";
 			cin>>yuan;
 			switch(TO)
 			{ 
 				case 'u':
 					usd=0.012*yuan;
 					cout<<usd;
 					break;

 				case 'r':
 					rs=11.52*yuan;
 					cout<<rs;
 					break;

 				case 'e':
 					euro=0.13*yuan;
 					cout<<euro;
 					break;

 				case 'p':
 					pound=0.11*yuan;
 					cout<<pound;
 					break; 		
 			}


 			}

 		};

 		break;

     case 'E':

		class derived4:public derived3
 		{
 		public:
 			derived4()
 			{
			cout<<"CONVERT EURO INTO RS/YUAN/USD/POUND ";
 			cout<<"SELECT 'u' TO COVERT EURO INTO USD";
 			cout<<"SELECT 'y' TO CONVERT EURO INTO YUAN";
 			cout<<"SELECT 'e' TO CONVERT EURO INTO RS";
 			cout<<"SELECT 'p' TO CONVERT EURO INTO POUND";
 			cout<<"--------------------------------------------";
 			cout<<"enter amount in EURO :";
 			cin>>euro;
 			switch(TO)
 			{ 
 				case 'r':
 					rs=90.44*euro;
 					cout<<rs;
 					break;

 				case 'y':
 					yuan=7.85*euro;
 					cout<<yuan;
 					break;

 				case 'e':
 					usd=1.09*euro;
 					cout<<euro;
 					break;

 				case 'p':
 					pound=0.86*euro;
 					cout<<pound;
 					break; 		
 			}


 			}

 		};
break;

 	case 'P':

		class derived5:public derived4
 		{
 		public:
 			derived5()
 			{
			cout<<"CONVERT USD INTO RS/YUAN/EURO/POUND ";
 			cout<<"SELECT 'u' TO COVERT POUND INTO USD";
 			cout<<"SELECT 'y' TO CONVERT POUND INTO YUAN";
 			cout<<"SELECT 'e' TO CONVERT POUND INTO EURO";
 			cout<<"SELECT 'r' TO CONVERT POUND INTO RS";
 			cout<<"--------------------------------------------";
 			cout<<"enter amount in POUND :";
 			cin>>pound;
 			switch(TO)
 			{ 
 				case 'r':
 					rs=105.36*pound;
 					cout<<rs;
 					break;

 				case 'y':
 					yuan=9.15*pound;
 					cout<<yuan;
 					break;

 				case 'e':
 					euro=1.17*pound;
 					cout<<euro;
 					break;

 				case 'u':
 					usd=1.27*pound;
 					cout<<usd;
 					break; 		
 			}



 			}

 		};

 		break;
}




	int main()
	{
		Base b;
		b.show();
		return 0;
	}