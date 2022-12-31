//17 Pattern 6
#include<stdio.h>
int main()
{
	char ch='A'-1;
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch+j);
		}
		printf("\n");
	}
	return 0;
}
