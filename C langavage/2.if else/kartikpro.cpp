#include<iostream>
using namespace std;

class kartik
{
        public:
        string from;
        string to;
        int fromamt;
        int toamt;
kartik()
{
cout<<"enter the currency :"<<endl;
cin>>from;
cout<<"TO BE CONVERTED"<<endl;
cin>>to;
}
};

int main()
{
    kartik k;
    return 0;
}