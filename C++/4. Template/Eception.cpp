/*Write a program to read an integer from the user. Use exception handling to handle invalid input 
(non-integer values) gracefully and prompt the user to enter a valid integer.
*/

#include<iostream>
using namespace std;
int main()
{
	int a,b;

	cout<<"Enter the first number  : ";
	cin>>a;

	
	try
	{
		if(a<0)
		{
			throw "number is negative";
		}
		else
		{
			cout<<"number is positive  ";
		}
	} 
	catch(const char *p)
	{
		cout<<p;
	}
	return 0;
}