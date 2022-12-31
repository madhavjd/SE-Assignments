//07 WAP Find out length of string without using inbuilt function 
#include<stdio.h>
void main()
{
	char str[100];
	int i,count=0;
	printf("Enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("String length is %d",count);
	return 0;
}
