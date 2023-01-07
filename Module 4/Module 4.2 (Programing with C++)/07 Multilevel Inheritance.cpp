//07 Multilevel Inheritance Class Student,Test and Result
#include<iostream>
using namespace std;
class student
{
	public:
	int roll;
	void getstudent()
	{
	 cout<<"Enter rollnumber: ";
	 cin>>roll;
	}

	
};
class test: public student 
{
	public:
	int m1,m2;
	void gettest()
	{
	 cout<<"Enter marks of two subjects: ";
	 cin>>m1>>m2;
	}
};
class result: public test
{
	public:
	void display()
	{
	 cout<<"Rollnumber of Student is: "<<roll;
	 cout<<endl<<"Marks of students of subject 1 is "<<m1<< "and subject 2 is: "<<m2;
	}
};
main()
{
  result r;
  r.getstudent();
  r.gettest();
  r.display();

}
