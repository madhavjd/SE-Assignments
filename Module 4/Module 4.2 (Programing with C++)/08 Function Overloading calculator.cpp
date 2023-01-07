//08 Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and Function Overloading
#include<iostream>
using namespace std;
void operation(int a,int b,int c)
{
	cout<<a<<"+"<<b<<"+"<<c<<" = "<<a+b+c;
}
void operation(int a,int b)
{
	cout<<endl<<a<<"-"<<b<<" = "<<a-b;
}
void operation()
{
	int a=18,b=19;
	cout<<endl<<a<<"*"<<b<<" = "<<a*b;
}
void operation(double a,double b)
{
	cout<<endl<<a<<"/"<<b<<" = "<<(a/b);
}
main()
{
    operation(5,9,7);
	operation(12,18);
	operation();
	operation(15.2,10.3);
}



