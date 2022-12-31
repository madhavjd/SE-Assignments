//04 WAP to find factorial using recursion
#include<stdio.h>
int fact(int num)
{
	if(num<=0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
int main()
{
	int n;
	printf("Enter a number to find its factorial: ");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,fact(n));
	return 0;
}
