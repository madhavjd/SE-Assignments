//03 WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number to check wether number is even or odd: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Number is even: ");
	}
	else
	{
		printf("Number is odd");
	}
	return 0;
}
