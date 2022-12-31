// 03 WAP to find reverse of string using recursion
#include<stdio.h>
void reverse (char *s);
int main()
{
	char s[100];
	printf("Enter a string: ");
	gets(s);
	reverse(s);
	printf("\n");
	return 0;
}
void reverse (char *s)
{   if(*s!='\0')
      {
       reverse(s+1);
	   printf("%c",*s);
	  }
}
