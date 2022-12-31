//01 find out the max number from given array using function
#include<stdio.h>
int main()
{
	int i,n,a[5]={65,54,87,13,3},max=0;
	for(i=0;i<5;i++)
	{
		printf("Element a[%d] = %d\n",i,a[i]);
		if(a[i]>max)
		{
		  max=a[i];
		}
	}
	printf("maximum from given array is = %d",max);
	return 0;
}
