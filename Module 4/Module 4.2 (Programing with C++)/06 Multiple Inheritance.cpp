////Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance) 
#include<iostream>
using namespace std;
class person
{
	public:
	char name[20];
	int age;
	void getperson()
	{
		cout<<"Enter Name of Person: ";
		gets(name);
		fflush(stdin);
		cout<<"Enter age of person: ";
		cin>>age;
	}
	void displayperson()
	{
	  cout<<"Name of Person is : "<<name<<" and age of person is: "<<age;
	}
};
class student
{
	public:
	float percentage;
	void getstudent()
	{
	 cout<<"Enter percentage of student: ";
	 cin>>percentage;
	}
	void displaystudent()
	{
		cout<<endl<<"Percentage of student is: "<<percentage;
	}
};
class teacher : public person, public student
{
	public:
	float salary;
	void getteacher()
	{
	  cout<<"Enter salary of teacher: ";
	  cin>>salary;
	}
	void displayteacher()
	{
	  cout<<endl<<"Salary of teacher is: "<<salary;
	}
};
main()
{
   teacher t;
   t.getperson();
   t.getstudent();
   t.getteacher();
   t.displayperson();
   t.displaystudent();
   t.displayteacher();
}
