//06 WAP to convert years into days and days into years 
#include<stdio.h>
int main()
{
	float days,years;
	printf("Enter number of Days: ");
	scanf("%f",&days);
	years=days/365;
	printf("%f years\n", years);
	printf("Enter number of Years: ");
	scanf("%f",&years);
	days=years*365;
	printf("Number of Days is: %f",days);
	return 0;
}
