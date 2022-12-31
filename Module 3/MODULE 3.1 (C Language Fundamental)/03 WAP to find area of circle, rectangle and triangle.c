//03 WAP to find area of circle, rectangle and triangle 
#include<stdio.h>
int main()
{
	float r,w,h,b,ht,area;
	printf("Enter radius of Circle: ");
	scanf("%f",&r);
	printf("Enter weidth of rectangle: ");
	scanf("%f",&w);
	printf("Enter heigth of rectangle: ");
	scanf("%f",&h);
	printf("Enter base of triangle: ");
	scanf("%f",&b);
	printf("Enter heigth of triangle: ");
	scanf("%f",&ht);
	area=3.14*r*r;
	printf("Area of circle is: %f\n",area);
	area=w*h;
	printf("Area of rectangle is: %f\n",area);
	area=0.5*b*ht;
	printf("area of triangle is: %f",area);
	return 0;
}
