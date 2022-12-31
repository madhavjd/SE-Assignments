//04 Simple Interest
#include<stdio.h>
int main()
{
	float p,r,n,interest;
	printf("Enter principle amount: ");
	scanf("%f",&p);
	printf("Enter rate of interest: ");
	scanf("%f",&r);
	printf("Enter number of years: ");
	scanf("%f",&n);
	interest=(p*r*n)/100;
	printf("Interest is %f",interest);
	return 0;
}
