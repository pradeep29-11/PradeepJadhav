#include<iostream>
using namespace std;
class Vehical
{
	protected:
		int vehical_id;
		string manufacture;
		int year;
	public:
		Vehical(int vehical_id,string manufacture,int year)
		{
			this->vehical_id=vehical_id;
			this->manufacture=manufacture;
			this->year=year;
		}
		virtual void display()
		{
			cout<<"Vehical ID  : "<<vehical_id<<endl;
			cout<<"Manufacture : "<<manufacture<<endl;
			cout<<"Year        : "<<year<<endl;
		}
		virtual~Vehical()
		{
			cout<<"I am in destructur of vehical !"<<endl;
		}
};
class Car:public Vehical
{
	protected:
		string model;
		string colour;
	public:
		Car(int x,string y,int z,string model,string colour):Vehical(x,y,z)
		{
			this->model=model;
			this->colour=colour;
		}
		virtual void display()
		{
			Vehical::display();
			cout<<"Model of class  : "<<model<<endl;
			cout<<"Colour of class : "<<colour<<endl;
			cout<<"--------------------------------------"<<endl;
		}
		~Car()
		{
			cout<<"I am in destructur of Car !"<<endl;
		}
};
class Truck:public Vehical
{
	protected:
		float capacity;
		string TransmissionType;
	public:
		Truck(int x,string y,int z,float capacity,string TransmissionType):Vehical(x,y,z)
		{
			this->capacity=capacity;
			this->TransmissionType=TransmissionType;
		}
		virtual void display()
		{
			Vehical::display();
			cout<<"capacity of Truck              : "<<capacity<<endl;
			cout<<"Transmission Type of thr Truck : "<<TransmissionType<<endl;
		}
		~Truck()
		{
			cout<<"I am in destructur of Truck !"<<endl;
		}
};
int main()
{
	Car ob(1001,"Toyata",2001,"Forntuner","white");
	Truck ob1(1001,"Toyata",2001,45.5,"white");

	ob.display();
	ob1.display();
	return 0;
}