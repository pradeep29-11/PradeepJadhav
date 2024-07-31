#include<iostream>
using namespace std;

template<typename T, typename sp>

T max(T a,sp b)
{
	if(a>b)
	{
		//cout<<a<<endl;
		return a;
	}
	else
	{
		return b;
	}
}


int main()
{
	int i=max<int,int>(10,20);
	cout<<"maximum no :"<<i<<endl;

	float b=min<float>(21.2,26.3);
	cout<<"minimum no :"<<b<<endl;

	return 0;
}