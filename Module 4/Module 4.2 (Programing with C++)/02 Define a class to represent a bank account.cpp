//Define a class to represent a bank account. Include the following members:
//1. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//2. Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance
#include<iostream>
using namespace std;
class bankaccount
{
	char name[20];
	int ac,a;
	float balance,d,w;
	public:
	void assignvalues()
	{
		cout<<"Enter name of depositor: ";
		cin>>name;
		fflush(stdin);
		cout<<"Enter account number: ";
		cin>>ac;
		cout<<"Enter Account balance: ";
		cin>>balance;
		cout<<"Enter account type '1' for savings or '2' for current : ";
		cin>>a;
	}
	void deposite()
	{
		cout<<"Enter amount to deposite: ";
		cin>>d;
	}
	void check()
	{
		cout<<"Balance amount is: "<<balance+d;
	}
	void withdraw()
	{
		cout<<endl<<"Enter amount to withdraw: ";
		cin>>w;
	}
	void display()
	{
		cout<<endl<<"Name of depositor is: "<<name;
		cout<<endl<<"Balance amount is: "<<balance+d-w;
	}
};
main()
{
	bankaccount b;
	b.assignvalues();
	b.deposite();
	b.check();
	b.withdraw();
	b.display();
}

