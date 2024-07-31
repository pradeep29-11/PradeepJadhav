#include<iostream>
using namespace std;

class Base
{

public:
	int from;
	char to;
	char TO;
    float rs;
    double usd;
	float yuan;
	float npr;
	double euro;
	double pound;

	void show()
	{	cout<<"------------------------------------------------"<<endl;
		cout<<"Choose any key as per instruction"<<endl;
		cout<<"RS-USD/YUAN/EURO/POUND:select R"<<endl;
		cout<<"USD-RS/YUAN/EURO/POUND:select U"<<endl;
		cout<<"YUAN-USD/RS/EURO/POUND:select Y"<<endl;
		cout<<"EURO-USD/YUAN/RS/POUND:select E"<<endl;
		cout<<"POUND-USD/YUAN/EURO/RS:select P"<<endl;
		cout<<"------------------------------------------------"<<endl;
		cout<<"choose:";
		cin>>to;
	

	switch(to)
{	
	case 'R':

		//class derived1:public Base
		//class derived1
		//{
		//public:
			//derived1()
			//{
 			cout<<"CONVERT RS INTO USD/YUAN/EURO/POUND "<<endl;
 			cout<<"SELECT 'u' TO COVERT RS INTO USD"<<endl;
 			cout<<"SELECT 'y' TO CONVERT RS INTO YUAN"<<endl;
 			cout<<"SELECT 'e' TO CONVERT RS INTO EURO"<<endl;
 			cout<<"SELECT 'p' TO CONVERT RS INTO POUND"<<endl;
 			cout<<"--------------------------------------------"<<endl;
 		//	cout<<"enter amount in rupees :";
 		//	cin>>rs;
 			cout<<"choose the option:";
 			cin>>TO;
 			cout<<"enter amount in rupees :";
 			cin>>rs;
 			switch(TO)
 			{ 
 				case 'u':
 					usd=83.3*rs;
 					cout<<"USD :"<<usd;
 					break;

 				case 'y':
 					yuan=11.51*rs;
 					cout<<"YUAN :"<<yuan;
 					break;

 				case 'e':
 					euro=90.37*rs;
 					cout<<"EURO :"<<euro;
 					break;

 				case 'p':
 					pound=105.27*rs;
 					cout<<"POUND :"<<pound;
 					break;

 			}


 			//}


 		//};	

 		break;

 	case 'U':

		//class derived2:public derived1
		//class derived2
 		//{ 
 		//public:
 			//derived2()
 			//{
			cout<<"CONVERT USD INTO RS/YUAN/EURO/POUND "<<endl;
 			cout<<"SELECT 'r' TO COVERT usd INTO RS"<<endl;
 			cout<<"SELECT 'y' TO CONVERT USD INTO YUAN"<<endl;
 			cout<<"SELECT 'e' TO CONVERT USD INTO EURO"<<endl;
 			cout<<"SELECT 'p' TO CONVERT USD INTO POUND"<<endl;
 			cout<<"--------------------------------------------"<<endl;
 			//cout<<"enter amount in USD :";
 			//cin>>usd;
 			cout<<"choose the option:";
 			cin>>TO;
 			cout<<"enter amount in USD :";
 			cin>>usd;

 			switch(TO)
 			{ 
 				case 'r':
 					rs=83.3*usd;
 					cout<<"RS :"<<rs;
 					break;

 				case 'y':
 					yuan=7.23*usd;
 					cout<<"YUAN :"<<yuan;
 					break;

 				case 'e':
 					euro=0.93*usd;
 					cout<<"EURO :"<<euro;
 					break;

 				case 'p':
 					pound=0.80*usd;
 					cout<<"POUND :"<<pound;
 					break; 		
 			}


 			//}

 		//};

		break;


       case 'Y':

		//class derived3:public derived2
		//class derived3
 		//{
 		//public:
 			//derived3()
 			//{
			cout<<"CONVERT USD INTO RS/YUAN/EURO/POUND "<<endl;
 			cout<<"SELECT 'u' TO COVERT YUAN INTO USD"<<endl;
 			cout<<"SELECT 'r' TO CONVERT YUAN INTO RS"<<endl;
 			cout<<"SELECT 'e' TO CONVERT YUAN INTO EURO"<<endl;
 			cout<<"SELECT 'p' TO CONVERT YUAN INTO POUND"<<endl;
 			cout<<"--------------------------------------------"<<endl;
 			//cout<<"enter amount in YUAN :";
 			//cin>>yuan;
 			cout<<"choose the option:";
 			cin>>TO;
 			cout<<"enter amount in YUAN :";
 			cin>>yuan;

 			switch(TO)
 			{ 
 				case 'u':
 					usd=0.14*yuan;
 					cout<<"USD :"<<usd;
 					break;

 				case 'r':
 					rs=11.52*yuan;
 					cout<<"RS :"<<rs;
 					break;

 				case 'e':
 					euro=0.13*yuan;
 					cout<<"EURO :"<<euro;
 					break;

 				case 'p':
 					pound=0.11*yuan;
 					cout<<"POUND :"<<pound;
 					break; 		
 			}


 			//}

 		//};

 		break;

     case 'E':

		//class derived4:public derived3
		//class derived4
 		//{
 		//public:
 			//derived4()
 			//{
			cout<<"CONVERT EURO INTO RS/YUAN/USD/POUND "<<endl;
 			cout<<"SELECT 'u' TO COVERT EURO INTO USD"<<endl;
 			cout<<"SELECT 'y' TO CONVERT EURO INTO YUAN"<<endl;
 			cout<<"SELECT 'r' TO CONVERT EURO INTO RS"<<endl;
 			cout<<"SELECT 'p' TO CONVERT EURO INTO POUND"<<endl;
 			cout<<"--------------------------------------------"<<endl;
 			//cout<<"enter amount in EURO :";
 			//cin>>euro;
 			cout<<"choose the option :";
 			cin>>TO;
 			cout<<"enter amount in EURO :";
 			cin>>euro;

 			switch(TO)
 			{ 
 				case 'r':
 					rs=90.44*euro;
 					cout<<"RS :"<<rs;
 					break;

 				case 'y':
 					yuan=7.85*euro;
 					cout<<"YUAN :"<<yuan;
 					break;

 				case 'u':
 					usd=1.09*euro;
 					cout<<"USD :"<<euro;
 					break;

 				case 'p':
 					pound=0.86*euro;
 					cout<<"POUND :"<<pound;
 					break; 		
 			}


 			//}

 		//};
break;

 	case 'P':

		//class derived5:public derived4
		//class derived
 		//{
 		//public:
 			//derived5()
 			//{
			cout<<"CONVERT USD INTO RS/YUAN/EURO/POUND "<<endl;
 			cout<<"SELECT 'u' TO COVERT POUND INTO USD"<<endl;
 			cout<<"SELECT 'y' TO CONVERT POUND INTO YUAN"<<endl;
 			cout<<"SELECT 'e' TO CONVERT POUND INTO EURO"<<endl;
 			cout<<"SELECT 'r' TO CONVERT POUND INTO RS"<<endl;
 			cout<<"--------------------------------------------"<<endl;
		//	cout<<"enter amount in POUND :";
 		//	cin>>pound;
 			cout<<"choose option :";
 			cin>>TO;
 			cout<<"enter amount in POUND :";
 			cin>>pound;
 			switch(TO)
 			{ 
 				case 'r':
 					rs=105.36*pound;
 					cout<<"RS :"<<rs;
 					break;

 				case 'y':
 					yuan=9.15*pound;
 					cout<<"YUAN :"<<yuan;
 					break;

 				case 'e':
 					euro=1.17*pound;
 					cout<<"EURO :"<<euro;
 					break;

 				case 'u':
 					usd=1.27*pound;
 					cout<<"USD :"<<usd;
 					break; 		
 			}

 			//}

 		//};

 		break;
}

}
	};
	int main()
	{
		Base b;
		//derived1 d1;
		//derived2 d2;
		//derived3 d3;
		//derived4 d4;
		//derived5 d5;
		b.show();
		return 0;
	}