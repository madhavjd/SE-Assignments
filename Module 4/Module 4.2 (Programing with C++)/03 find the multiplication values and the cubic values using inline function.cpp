//03 Write a program to find the multiplication values and the cubic values using inline function 
#include<iostream>
using namespace std;
class operation
{
	public:
		inline float mul(float x,float y)
		{
			return(x*y);
		}
		inline float cube(float x)
		{
			return(x*x*x);
		}
};
main()
{
	operation op;
	float a,b;
	cout<<"Enter two values: ";
	cin>>a>>b;
	cout<<endl<<"Multiplication is: "<<op.mul(a,b);
	cout<<endl<<"Cube of "<<a<<" is "<<op.cube(a)<<"\t"<<"and Cube of "<<b<<" is "<<op.cube(b);
}

