#include<iostream>
using namespace std;
class Animal
{
	public:
		virtual void MakeSound()=0;
};
class Dog:public Animal
{
	public:
		void MakeSound()
		{
			cout<<"Dog : Woff "<<endl;
		}

};
class Cat:public Animal
{
	public:
		void MakeSound()
		{
			cout<<"Cat : Meow "<<endl;
		}
};
class Cow: public Animal
{
	public:
		void MakeSound()
		{
			cout<<"Cow : Moo! "<<endl;
		}

};
int main()
{
	int n;
	n=3;

	Animal* animal[n];

	animal[0]=new Dog();
	animal[1]=new Cat();
	animal[2]=new Cow();

	for(int i=0;i<n;i++)
	{
		animal[i]->MakeSound();
	}

	for(int i=0;i<n;i++)
	{
		delete animal[i];
	}
	

	return 0;
}