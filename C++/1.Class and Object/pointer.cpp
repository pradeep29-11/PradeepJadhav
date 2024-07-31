#include<iostream>
using namespace std;
class student
{
 	private:
 		string name;
 		int rno;
 		float fees;

 	public:
 		student()
 		{
 			 
 			 name="pradeep jadhav";
 			 rno=13;
 			 fees=12.300;
 		}
 		student(string y,int x,float z)
 		{
 			name=y;
 			rno=x; 			
 			fees=z;

 		}
 		student(student &tob)
 		{
 			name=tob.name;
 			rno=tob.rno; 			
 			fees=tob.fees;
 		}
 		void display()
 		{
 			cout<<"name : "<<name<<endl;
 			cout<<"roll no : "<<rno<<endl;
 			cout<<"Fees : "<<fees<<endl;
 			cout<<"----------------"<<endl;
 		}
 		~student()
 		{
 			cout<<"destroyed : "<<endl;
 		}
};
int main()
{
	student s1;
	s1.display(); 

	
	student s2("kartik k",14,12.00);
	s2.display();

	student*p=&s2;


	student s3(*p);
	p->display();

	return 0;
}