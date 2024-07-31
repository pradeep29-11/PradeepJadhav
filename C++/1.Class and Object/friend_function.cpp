#include<iostream>
using namespace std;
class student 
{
 	private:
 		int rno;
 		string name;
 		float salary;
 	public:
 		student()
 		{
 			rno=0;
 			name="aditay";
 			salary=0.0;
 		}
 		student(int x,string y,float z)
 		{
 			rno=x;
 			name=y;
 			salary=z;
 		}
 		friend int main();

};
class ABC
{
		public:
			

};

int main()
{
	student s1(4,"pradeep",6.0);

	cout<<s1.rno<<endl;
	cout<<s1.name<<endl;
	cout<<s1.salary<<endl;
	return 0;
}