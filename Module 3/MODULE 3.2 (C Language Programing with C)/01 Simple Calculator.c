//02 Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
int main()
{
	
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Addition=%d\n",a+b);
	printf("Substraction=%d\n",a-b);
	printf("Multiplication=%d\n",a*b);
	printf("Division=%d\n",a/b);
	printf("Modulo=%d\n",a%b);
	
	return 0;
}
