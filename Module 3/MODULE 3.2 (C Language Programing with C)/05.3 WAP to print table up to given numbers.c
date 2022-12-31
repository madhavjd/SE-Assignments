//05.3 WAP to print table up to given numbers
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number upto which you want to print table: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
