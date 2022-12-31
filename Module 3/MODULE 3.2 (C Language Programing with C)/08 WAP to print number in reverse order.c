//08 WAP to print number in reverse order
#include<stdio.h>
int main()
{
	int n,last,reverse=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		last=n%10;
		reverse=reverse*10+last;
		n/=10;
	}
	printf("Reversed Number is %d",reverse);
}
