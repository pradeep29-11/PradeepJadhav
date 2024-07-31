#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void makesound()=0;
};

class cow:public Animal
{
public:
	void makesound()
	{
		cout<<"MOO..!"<<endl;
	}
};

class cat:public Animal
{
public:
	void makesound()
	{
		cout<<"MEOW..!"<<endl;
	}
};

class dog:public Animal
{
public:
	void makesound()
	{  //cow::makesound();
	   //cat::makesound();
		cout<<"WOOF..!"<<endl;
	}
};

int main()
{ 
 int numanimals=3;
 int i;
	Animal* animals[numanimals]=
 {new cow(),new cat(),new dog()};

for(i=0;i<numanimals;++i) 
{animals[i]->makesound();}

for(int i=0;i<numanimals;++i)
{delete animals[i];}


 return 0;

}