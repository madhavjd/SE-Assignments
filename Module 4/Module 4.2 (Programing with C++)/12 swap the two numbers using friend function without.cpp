//12 Write a program to swap the two numbers using friend function without using third variable 
#include<iostream>
using namespace std;
int main()
{
	double a,b;
	cout<<"Enter number 1: ";
	cin>>a;
	cout<<"Enter number 2: ";
	cin>>b;
	a = a - b;
	b = a + b;
	a = b - a;
	cout<<endl<<"After Swaping a = "<<a;
	cout<<endl<<"After Swaping b = "<<b;
}
