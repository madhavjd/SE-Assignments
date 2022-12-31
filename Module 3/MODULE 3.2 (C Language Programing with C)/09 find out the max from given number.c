//09 find out the max from given number
#include<stdio.h>
int main()
{
	int n,max=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%10>max)
		{
		  max=n%10;
		}
		n/=10;
	}
	printf("Lasgest Number = %d",max);
}
