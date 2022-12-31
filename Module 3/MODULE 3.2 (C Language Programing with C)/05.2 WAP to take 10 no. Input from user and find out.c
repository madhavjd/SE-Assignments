//05.2 WAP to take 10 no. Input from user and find out
#include<stdio.h>
int main()
{
   int n,i,counteven=0,countodd=0,sumeven=0,sumodd=0;
   for(i=1;i<=10;i++)
   {
   	printf("Enter number %d: ",i);
   	scanf("%d",&n);
   	if(n%2==0)
   	{
   	  counteven++;
   	  sumeven=sumeven+n;
    }
    else
    {
      countodd++;
      sumodd=sumodd+n;
	}
   }
   printf("Total even numbers is: %d\n",counteven);
   printf("Total odd numbers is: %d\n",countodd);
   printf("Sum of even numbers is: %d\n",sumeven);
   printf("Sum of odd numbers is: %d",sumodd);
   return 0;
}
