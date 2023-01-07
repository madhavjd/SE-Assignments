//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
   char op;
   float a,b;
   public:
   void inputdata()
   {
   cout<<"Enter Operator:+, -, *, /: ";
   cin>>op;
   cout<<"Enter two numbers: ";
   cin>>a>>b;
   }
   void display()
   {
   	switch(op)
   { 
    case '+':
   	cout<<"Addition is: "<<a+b;
   	break;
    case '-':
   	cout<<"Substraction is: "<<a-b;
   	break;
    case '*':
   	cout<<"Multiplication is: "<<a*b;
   	break;
    case '/':
   	cout<<"Division is: "<<a/b;
   	break;
   }
   }
};
main()
{
	calculator c;
	c.inputdata();
	c.display();
}


