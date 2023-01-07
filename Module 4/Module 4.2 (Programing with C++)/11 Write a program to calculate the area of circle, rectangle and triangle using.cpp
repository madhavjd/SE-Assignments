//11 Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
#include<iostream>
using namespace std;
float area(float);
int area(int,int);
float area(float,float);
int main()
{
  int w,h;
  float r,b,ht;
  cout<<"Enter radius of circle: ";
  cin>>r;
  cout<<"Enter width and height of rectangle: ";
  cin>>w>>h;
  cout<<"Enter base and height of triangle: ";
  cin>>b>>ht;
  cout<<"Area of Circle is: "<<area(r);
  cout<<endl<<"Area of Rectangle is: "<<area(w,h);
  cout<<endl<<"Area of triangle is: "<<area(b,ht);
}
float area(float r)
{
	return (3.14*r*r);
}
int area(int w,int h)
{
	return (w*h);
}
float area(float b,float ht)
{
	return (0.5*b*ht);
}

