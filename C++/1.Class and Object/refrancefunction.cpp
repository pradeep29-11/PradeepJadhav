#include<iostream>
using namespace std;
void pradeep(int &x,float &y){
	cout<<"my name is aniket" <<endl <<  x<<endl << y <<endl;
	float sum=x+y;
	cout<<"sum is: "<<sum<<endl;
}
int main()
{	int a=1;
	float b=3.5;
	cout<<"hello"<<endl;
	pradeep(a,b);

	return 0;
}