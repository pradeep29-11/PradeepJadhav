#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter the size:";
	cin>>size;
	int arr[size];
	cout<<"enter the integer:";
	for(int i=0;i<size;i++)
	{cin>>arr[i];}
	for(int i=0;i<size;i++)
	{
	if(i%2==0){
	cout<<"number is even :"<<arr[i]<<endl;
	}
	if(i%2==0)
	cout<<"number is odd :"<<arr[i]<<endl;
	}
	return 0;
}