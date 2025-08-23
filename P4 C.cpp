//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <math.h>
int main()
{
	float radius,area,circumference;
	printf("Enter Radius:");
	scanf("%f",&radius);
	area=("%f",M_PI*radius*radius);
	circumference=("%f",2*M_PI*radius);
	printf("Area is: %f", area);
	printf("Circumference is: %f", circumference);
	return 0;
}
