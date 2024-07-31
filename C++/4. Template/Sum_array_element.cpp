/*Create a template function called `sum()` to calculate the sum of elements in an array of any data 
type. Test the function with integer, floating-point, and character arrays*/

#include<iostream>
using namespace std;

template<class sp>
sp Sum(sp a[],int m)
{
	sp ans=0;

	for(int i=0;i<m;i++)
	{
		ans=ans+a[i];
	}
	return ans;
}

int main()
{
	float a[100],ans;
	int n;

	cout<<"How many number you want : ";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"Enter the data : ";
		cin>>a[i];
	}

	ans=Sum<float>(a,n);

	cout<<"Sum of array : "<<ans<<endl;
	return 0;
}