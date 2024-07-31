#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int level;
	int number;
	int guessnumber;
	int choice_left;
	cout<<"----------------------WELCOME TO NUMBER GUESSING GAME----------------------"<<endl;
	cout<<"You have to guest number 1 to 100"<<endl;
	cout<<"you have limited choice based on you choice Difficult level "<<endl;
	while(1)
	{
		cout<<"Difficult level "<<endl;
		cout<<"1 : for simple level \t";
		cout<<"2 : for medium level \t";
		cout<<"3 : for high   level \t";
		cout<<"0 : for end the game \t"<<endl<<endl;
		cout<<"Enter the Difficult level : ";
		cin>>level;

		srand( time(NULL));
		number=1+(rand()%100);

		if(level==1)
		{
			cout<<"You have 10 choice to finding the secret number 1 to 100"<<endl;
			choice_left=10;
			for(int i=1;i<=10;i++)
			{
				cout<<"Guess the number : ";
				cin>>guessnumber;

				if(guessnumber==number)
				{
					cout<<"*******************-You have win the Game-*******************  "<<endl;
					cout<<"secret number is "<<number<<endl;
					cout<<"--------------------THANKS FOR PLAYING--------------------"<<endl;
					break;
				}
				else
				{
					cout<<guessnumber<<" is not secret number!"<<endl;
					if(number>guessnumber)
					{
						cout<<"Secret number is greater than choice number "<<endl;
						cout<<"Try again"<<endl;
						cout<<"--------------------------------------------------------"<<endl;
					}
					else
					{
						cout<<"secret number less than choice number "<<endl;
						cout<<"Try again"<<endl;
						cout<<"--------------------------------------------------------"<<endl;
					}
				}
				choice_left--;
				cout<<choice_left<<" choice is left"<<endl;
				if(choice_left==0)
				{
					cout<<"You could not find the secret number "<<endl;
					cout<<"secret number is "<<number<<endl;
					cout<<"Play the game again to win "<<endl;
					cout<<"--------------------------------------------------------"<<endl;
					break;
				}
			}
		}
		else if(level==2)
		{
			cout<<"You have 5 choice to finding the Secret number "<<endl;
			choice_left=5;
			for(int i=1;i<=5;i++)
			{
				cout<<"Guess the number : ";
				cin>>guessnumber;
				if(guessnumber==number)
				{
					cout<<"--------------------You have win the Game-------------------- "<<endl;
					cout<<"secret number is "<<number<<endl;
					cout<<"--------------------THANKS FOR PLAYING--------------------"<<endl;
					break;	
				}
				else
				{
					cout<<guessnumber<<" is not secret number!"<<endl;
					if(number>guessnumber)
					{
						cout<<"Secret number is greater than choice number "<<endl;
						cout<<"Try again"<<endl;
						cout<<"--------------------------------------------------------"<<endl;
					}
					else
					{
						cout<<"secret number less than choice number "<<endl;
						cout<<"Try again"<<endl;
						cout<<"--------------------------------------------------------"<<endl;
					}
				}
				choice_left--;
				cout<<choice_left<<" choice is left"<<endl;
				if(choice_left==0)
				{
					cout<<"You could not find the secret number "<<endl;
					cout<<"secret number is "<<number<<endl;
					cout<<"Play the game again to win "<<endl;
					cout<<"--------------------------------------------------------"<<endl;
					break;
				}
			}
		}
		else if(level==3)
		{
			cout<<"You have 3 choice to finding the secret number 1 to 100 "<<endl;
			choice_left=3;
			for(int i=1;i<=3;i++)
			{
				cout<<"Guess the number ";
				cin>>guessnumber;
				if(number==guessnumber)
				{
					cout<<"--------------------You have win the Game-------------------- "<<endl;
					cout<<"secret number is "<<number<<endl;
					cout<<"--------------------THANKS FOR PLAYING--------------------"<<endl;
					break;
				}
				else
				{
					cout<<guessnumber<<" is not secret number!"<<endl;
					if(number>guessnumber)
					{
						cout<<"Secret number is greater than choice number "<<endl;
						cout<<"Try again"<<endl;
						cout<<"--------------------------------------------------------"<<endl;
					}
					else
					{
						cout<<"secret number less than choice number "<<endl;
						cout<<"Try again"<<endl;
						cout<<"--------------------------------------------------------"<<endl;
					}
				}
				choice_left--;
				cout<<choice_left<<" choice is left"<<endl;
				if(choice_left==0)
				{
					cout<<"You could not find the secret number "<<endl;
					cout<<"secret number is "<<number<<endl;
					cout<<"Play the game again to win "<<endl;
					cout<<"--------------------------------------------------------"<<endl;
					break;
				}
			}
		}
		else if(level==0)
		{
			exit(0);
		}
		else
		{
			cout<<"Wrong choice "<<endl;
			cout<<"Enter the valid choice to play again(1 2 3) "<<endl;
		}
	}
	return 0;
}