//09 Write a Program of Two 1D Matrix Addition using Operator Overloading 
#include<iostream>
using namespace std;
class matrix
{
	int i,j,a[10],b[10];
	public:
		void input()
		{
			for(i=0;i<5;i++)
			{
				cout<<"Enter data of matrix 1: ";
				cin>>a[i];
			}
			cout<<"\n";
			for(i=0;i<5;i++)
			{
				cout<<"Enter data of matrix 2: ";
				cin>>b[i];
			}
		}
		void show()
		{
			cout<<"Matrix 1: ";
			for(i=0;i<5;i++)
			{
				cout<<a[i]<<"\t";
			}
			cout<<"\n";
			cout<<"Matrix 2: ";
			for(i=0;i<5;i++)
			{
				cout<<b[i]<<"\t";
			}
		}
		void operator +()
		{
			cout<<"\n";
			cout<<"Addition of two matrix: ";
			for(i=0;i<5;i++)
			{
				cout<<a[i]+b[i]<<"\t";
			}
		}
};
main()
{
	matrix m;
	m.input();
	m.show();
	+m;
}
