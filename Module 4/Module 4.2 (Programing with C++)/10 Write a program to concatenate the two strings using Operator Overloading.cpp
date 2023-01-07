//10 Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;
class strings
{
	public:
		char str1[30],str2[30];
		void input()
		{
			cout<<"Enter String 1:  ";
			gets(str1);
			cout<<"Enter String 2:  ";
			gets(str2);
		}
	   void operator +()
	   {
	   	cout<<endl<<"Concatenated String is:  "<<strcat(str1, str2);
	   }
};
main()
{
	strings s;
	s.input();
	+s;
}

