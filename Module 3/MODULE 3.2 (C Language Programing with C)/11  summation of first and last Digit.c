//11  summation of first and last Digit
#include<stdio.h>
int main()
{
  int n,first,last,sum=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  last=n%10;
  while(n>10)
  {
  	n/=10;
  	first=n;
  }
  	sum=first+last;
  printf("Summ of a first and last digit  is: %d",sum);
  return 0;
}
