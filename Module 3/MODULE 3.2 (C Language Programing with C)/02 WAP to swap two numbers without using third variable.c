//02 WAP to swap two numbers without using third variable
#include<stdio.h>
int main()
{
	double a,b;
	printf("Enter number 1: ");
	scanf("%lf",&a);
	printf("Enter number 2: ");
	scanf("%lf",&b);
	a = a - b;
	b = a + b;
	a = b - a;
	printf("After Swaping a = %lf\n",a);
	printf("After Swaping b = %lf",b);
	return 0;
}
