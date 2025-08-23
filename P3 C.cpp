//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
	float length,breadth,area,perimeter;
	printf("Enter Length:");
	scanf("%f",&length);
	printf("Enter Breadth");
	scanf("%f",&breadth);
	area=("%f",length*breadth);
	perimeter=("%f",2*(length+breadth));
	printf("Area is:%f/n",area);
	printf("Perimeter is: %f/n",perimeter);
	return 0;
}

