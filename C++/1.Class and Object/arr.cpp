#include<iostream>
 using namespace std;
 int main()
 {
  int size;
  cout<<"enter the size:";
  cin>>size;
  int arr[size];
  cout<<"enter the integer:";
  for(int i=0;i<=size;i++)
  {
  cin>>arr[i];
  }
  for(int i=0;i<=size;i++)
  cout<<" given arr is: "<<arr[i];
  return 0;
 }          