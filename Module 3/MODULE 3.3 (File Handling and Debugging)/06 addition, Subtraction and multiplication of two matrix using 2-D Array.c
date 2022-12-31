//06 WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
void main()
{
	int i,j,k,a[20][20],b[20][20],c[20][20];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter data of matrix 1 in [Row %d][Column %d]: ",i+1,j+1);           //Data entry in matrix 1
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter data of matrix 2 in [Row %d][Column %d]: ",i+1,j+1);          //Data entry in matrix 2
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	printf("Matrix 1:\n");                                     //Display Matrix 1
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Matrix 2:\n");                                  //Display Matrix 2
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Addition of Matrix 1 and 2:\n");   //Matrix Addition
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j] + b[i][j]);    
		}
		printf("\n");
	}
	printf("\n");
	printf("Substraction of Matrix 1 and 2:\n");   //Matrix Substraction
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j] - b[i][j]);    
		}
		printf("\n");
	}
	printf("\n");
	printf("Multiplication of Matrix 1 and 2:\n");       //Multiplication of Matrix 1 and 2;
	for(i=0;i<2;i++)
	{
	 for(j=0;j<2;j++)
	  {  
	   c[i][j]=0;
	   for(k=0;k<2;k++)
		{
		 c[i][j]+=a[i][k]*b[k][j];
	    }
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	  }
	return 0;  
}
