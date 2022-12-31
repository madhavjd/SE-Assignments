//String is palindrom or not 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[200],str1[200];
	printf("Enter a string: ");
	gets(str);
    strcpy(str1,str);
    strrev(str1);
    printf("reverse string is: %s\n",str1);
    if(strcmp(str1,str)==0)
    {
    	printf("String is palindrom\n");
	}
	else
	{
		printf("String is not palindrom");
	}
	return 0;
}
