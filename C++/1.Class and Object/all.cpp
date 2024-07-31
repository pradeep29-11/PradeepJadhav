#include<iostream>
using namespace std;

class A
{
public:
 string name;


	A()
	{
		cout<<"my name is "<<endl;
		cin>>name;
	}
} ;

class B
{
public:
	int age;

	B()
	{
			cout<<"my age is"<<endl;
			cin>>age;

	}
};

class C:public A,public B
{
public:
	string address;

	C()
	{
			cout<<"my address is "<<endl;
			cin>>address;
	}
};

class D:public C 
{
public:
		string college;
	
		D()
		{
				cout<<"collae name is "<<endl;
				cin>>college;
		}
};


class E:public virtual D
{
public:
   string branch;
   
   		E()
   		{
   			cout<<"my branch is "<<endl;
   			cin>>branch;
   		}

} ;

class F:public virtual D
{
public:
int roll;
		F()
		{
			cout<<"My rll no is "<<endl;
			cin>>roll;
		}
};

class G:public E,public F
{
public:
	void result()
	{
		
	return 0;
	   cout<<"my name is="<<name<<endl;
		cout<<"my age is="<<age<<endl;
		cout<<"my address is="<<address<<endl;
		cout<<"my college nmae is="<<college<<endl;
		cout<<"my branch is="<<branch<<endl;
		cout<<"my roll no is="<<roll<<endl;
		cout<<"this is my info"<<endl;
	}
};


int main()
{
	G g;
	g.result();
}






























































