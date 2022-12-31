//02 WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int main()
{
	int n;
	float a,b,ans;
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter any option from above menu: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("Enter two numbers: ");
	    scanf("%f %f",&a,&b);
	    ans=a+b;
	    printf("Addition is %f",ans);
	    break;
	    
		case 2:
		printf("Enter two numbers: ");
	    scanf("%f %f",&a,&b);
	    ans=a-b;
	    printf("Substraction is %f",ans);
	    break;
	    
		case 3:
		printf("Enter two numbers: ");
	    scanf("%f %f",&a,&b);
	    ans=a*b;
	    printf("Multiplication is %f",ans);
	    break;
	    
		case 4:
		printf("Enter two numbers: ");
	    scanf("%f %f",&a,&b);
	    ans=a/b;
	    printf("Division is %f",ans);
	    break;
	    
	    default:
        printf("Invalid Input");
        break;
	}
	return 0;
}
