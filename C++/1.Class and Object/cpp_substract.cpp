#include<iostream>
using namespace std;

void substract(int x ,int y)
{   int a=x;
    int b=y;
	int sub=a-b;
	cout<<"sub of interger :"<<sub<<endl;
}

void substract(float x ,float y)
{
	double a=x;
	double b=y;
	double sub=a-b;
	cout<<"sub of float :"<<sub<<endl;

}

int main()
{
	substract(5,4);
	substract(5.3f,4.2f);
	return 0;
}