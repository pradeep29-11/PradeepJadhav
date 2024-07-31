/*Implement a templated `Matrix` class supporting basic matrix operations like addition, subtraction, 
multiplication, and transpose. Test the class with matrices of different dimensions*/

#include<iostream>
using namespace std;
template<class sp>
class Matrix
{
	int x;
	int y;
	sp a[100][100];
	sp b[100][100];
	sp sum[100][100];
	sp sub[100][100];
	sp mult[100][100];
	sp trans[100][100];
	public:
		
		void accept()
		{
			cout<<"How many rows : ";
			cin>>x;

			cout<<"How many colums : ";
			cin>>y;

			cout<<"Enter the first matrix : "<<endl;
			for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					cout<<"Enter the data : ";
					cin>>a[i][j];
				}
			}

			cout<<"Enter the second matrix : "<<endl;
			for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					cout<<"Enter the data : ";
					cin>>b[i][j];
				}
			}
		}
		void add()
		{
			for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					sum[i][j]=a[i][j]+b[i][j];
				}
			}
		}
		void Sub()
		{
			for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					sub[i][j]=a[i][j]-b[i][j];
				}
			}
		}
		void Mult()
		{
			for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					mult[i][j]=a[i][j]*b[i][j];
				}
			}
		}
		

		void display()
		{
			cout<<"Sum of Matrix : "<<endl;
			for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					cout<<"  "<<sum[i][j];
				}
				cout<<endl;
			}
			cout<<"Subtrcation of Matrix : "<<endl;
			for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					cout<<"	 "<<sub[i][j];

				}
				cout<<endl;
			}
			cout<<"Multiplication of matrix : "<<endl;
			for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					cout<<"	 "<<mult[i][j];
				}
				cout<<endl;
			}
			cout<<"Transpose Matrix : "<<endl;
			for(int i=0;i<y;i++)
			{
				for(int j=0;j<x;j++)
				{
					cout<<"	 "<<a[j][i];
				}
				cout<<endl;
			}

		}
};
int main()
{
	Matrix <int>ob;

	ob.accept();
	ob.add();
	ob.Sub();
	ob.Mult();
	ob.display();
	return 0;
}
