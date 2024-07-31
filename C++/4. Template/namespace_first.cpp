  #include<iostream>
using namespace std;
namespace First
{
	int i=5;

}
namespace Second 
{
	int i=10;
}
int main()
{
	cout<<"Value of First  i : "<<First:: i<<endl;
	cout<<"Value of Second i : "<<Second::i<<endl;

	using namespace First;

	cout<<"Value of First  i : "<<Second::i<<endl;
	cout<<"Value of Second i : "<<i<<endl;

	return 0;
}