//Single Inheritance cricketer batsman
#include<iostream>
using namespace std;
class cricketer
{
	public:
	float total,best,m,avg;
		void input()
		{
			cout<<"Input total runs of batsman: ";
			cin>>total;
			cout<<"Enter times out(The number of times the batter has been caught out): ";
			cin>>m;
			cout<<"Input best performance of batsman: ";
			cin>>best;
		}
};
class batsman :  public cricketer
{
	public:
	void average()
		{
			avg=(total/m);
		}
	void display()
		{
			cout<<"Batting Average is: "<<avg;
		}
};
main()
{
   batsman b;
   b.input();
   b.average();
   b.display();
}

