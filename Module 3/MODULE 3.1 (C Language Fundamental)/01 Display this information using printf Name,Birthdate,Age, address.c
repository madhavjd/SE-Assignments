//01 Display this information using printf Name,Birthdate,Age, address
#include<stdio.h>
int main()
{
	int age;
	char name[30],date[30],address[100];
	printf("Enter your Name: ");
	scanf("%s",&name);
	printf("Enter your Birthdate: ");
	scanf("%s",date);
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your address: ");
	scanf("%s",&address);
	printf("Your Name is :%s \n",name);
	printf("Your Birthdate is: %s\n",date);
	printf("Your age is: %d\n",age);
	printf("Your address is: %s",address);
	return 0;
}
