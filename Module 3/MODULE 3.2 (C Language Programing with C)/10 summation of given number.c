//10 summation of given number
#include<stdio.h>
int main()
{
  int n,sum=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  while(n>0)
  {
  	sum+=n%10;
  	n/=10;
  }
  printf("Summation of a number is: %d",sum);
  return 0;
}
