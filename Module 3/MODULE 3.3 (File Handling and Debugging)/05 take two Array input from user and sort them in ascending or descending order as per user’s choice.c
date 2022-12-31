//05 WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>
void main ()
{
   int i,j,temp,n1,n2,a[20],b[20],m;
   printf("enter number of elements in an array 1 ");
   scanf("%d", &n1);
   printf("enter number of elements in an array 2 ");
   scanf("%d", &n2);
                 //Array input of array 1 and 2
   printf("Enter the elements of array 1\n");
   for (i = 0; i <n1; i++)
   scanf("%d", &a[i]);
   printf("Enter the elements of array 2\n");
   for (i = 0; i <n2; i++)
   scanf("%d", &b[i]);
                  //Choiece ascending or descending
   printf("1.Ascending\n");
   printf("2.Descending\n");
   printf("Select any option from above menu. Enter 1 or 2: ");
   scanf("%d",&m);
   switch(m)
   {
   	case 1:
    for (i = 0; i < n1; i++)
   {
      for (j = i + 1; j < n1; j++)
	  {
         if (a[i] > a[j])
		 {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
   printf("The numbers in Ascending order of Array 1 is: \n");
   for (i = 0; i < n1; i++)
   {
      printf("%d\n", a[i]);
   }
   for (i = 0; i < n2; i++)
   {
      for (j = i + 1; j < n2; j++)
	  {
         if (b[i] > b[j])
		 {
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
         }
      }
   }
   printf("The numbers in Ascending order for array 2 is: \n");
   for (i = 0; i < n2; i++)
   {
      printf("%d\n", b[i]);
   }
   break;
   
   	case 2:
    for (i = 0; i < n1; i++)
   {
      for (j = i + 1; j < n1; j++)
	  {
         if (a[i] < a[j])
		 {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
   printf("The numbers in Descending order of Array 1 is: \n");
   for (i = 0; i < n1; i++)
   {
      printf("%d\n", a[i]);
   }
   for (i = 0; i < n2; i++)
   {
      for (j = i + 1; j < n2; j++)
	  {
         if (b[i] < b[j])
		 {
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
         }
      }
   }
   printf("The numbers in Descending order for array 2 is: \n");
   for (i = 0; i < n2; i++)
   {
      printf("%d\n", b[i]);
   }
   break;
   default:
   printf("invalid input");
   } 
}
   
   

