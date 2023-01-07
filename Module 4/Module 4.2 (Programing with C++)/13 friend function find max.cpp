//13 Write a program to find the max number from given two numbers using friend function 
#include<iostream>
using namespace std;
class operation
{
	int a=1950,b=1786;
	public:
	void input()
	{
       cout<<"Number 1 is: "<<a;
       cout<<endl<<"Number 2 is: "<<b;
	}
	friend int find(operation ob);
};
int find(operation ob)
{
	if(ob.a>ob.b)
	{
		cout<<endl<<"Number "<<ob.a<<" is maximum";
	}
	else
	{
		cout<<endl<<"Number "<<ob.b<<" is maximum";
	}
}
int main()
{
  operation ob;
  ob.input();
  find(ob);
}
